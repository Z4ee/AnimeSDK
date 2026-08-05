#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_45.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UIGACHAOPTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18AC9520)

namespace MoleMole
{
	inline static constexpr unsigned int UIGachaOptPageController_Context_TypeDefinitionIndex = 90306;

	class UIGachaOptPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::Enum_3_0A3761FE34514D6C_45> InitialCustomizeType; // 0x28
		::System::Int32 GachaID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGACHAOPTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
