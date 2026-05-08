#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_A865FEC42C70DCB5.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167DDAA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFruitToysMainPageController_Context_TypeDefinitionIndex = 57062;

	class UIActivityFruitToysMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Enum_3_A865FEC42C70DCB5 ActivityType; // 0x28

		::System::Void _ctor(::Enum_3_A865FEC42C70DCB5 activityType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_A865FEC42C70DCB5))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFRUITTOYSMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this, activityType);
		}
	};
}
