#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7AEF4D15E4700EEA.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x173C5580)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController_Context_TypeDefinitionIndex = 64601;

	class UIActivityFruitToysMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_7AEF4D15E4700EEA ActivityType; // 0x28

		::System::Void _ctor(::Enum_3_7AEF4D15E4700EEA activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_7AEF4D15E4700EEA))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this, activityType);
		}
	};
}
