#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabData.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIAutoBattleRuleDialogPopWindowController; }

#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16457C70)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__SETUPTABS_B__0_OFFSET UNITYSDK_OFFSET(0x16458EB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRuleDialogPopWindowController___c__DisplayClass10_0_TypeDefinitionIndex = 75471;

	class UIAutoBattleRuleDialogPopWindowController___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData tabData; // 0x10
		::MoleMole::UIAutoBattleRuleDialogPopWindowController* __4__this; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetupTabs_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___C__DISPLAYCLASS10_0__SETUPTABS_B__0_OFFSET))(this);
		}
	};
}
