#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/Struct_2_B679E4D914A10080.h"

namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0xFACC100)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTipsWidgetContext_TypeDefinitionIndex = 67362;

	class UIUrbanMapTipsWidgetContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Func_1<::System::Boolean>* IsMuteClick; // 0x28
		::System::Boolean NetFlag; // 0x30
		::System::Int32 MapAreaId; // 0x34
		::Struct_2_B679E4D914A10080 SectionOrFloor; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTEXT__CTOR_OFFSET))(this);
		}
	};
}
