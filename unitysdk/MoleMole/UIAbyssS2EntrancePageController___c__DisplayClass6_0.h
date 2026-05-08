#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAbyssS2EntrancePageController_LevelTabStatus.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAbyssS2EntrancePageController; }

#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12384BF0)
#define MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__0_OFFSET UNITYSDK_OFFSET(0x12384C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EntrancePageController___c__DisplayClass6_0_TypeDefinitionIndex = 75401;

	class UIAbyssS2EntrancePageController___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAbyssS2EntrancePageController* __4__this; // 0x10
		::MoleMole::UIAbyssS2EntrancePageController_LevelTabStatus tabType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2ENTRANCEPAGECONTROLLER___C__DISPLAYCLASS6_0__ONUIINIT_B__0_OFFSET))(this);
		}
	};
}
