#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/System/Nullable_1.h"

#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18321AF0)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHousePageController_Context_TypeDefinitionIndex = 82300;

	class UILiveHousePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Nullable_1<::System::Int32> LevelID; // 0x28
		::System::Nullable_1<::System::Int32> GeneralLevelID; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
