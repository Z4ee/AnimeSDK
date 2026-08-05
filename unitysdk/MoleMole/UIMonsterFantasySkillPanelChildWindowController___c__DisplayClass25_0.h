#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class TurnBattleEntityUnit; }
namespace MoleMole { class UIMonsterFantasySkillPanelChildWindowController; }

#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x168E2980)
#define MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__ONPOINTERUP_B__0_OFFSET UNITYSDK_OFFSET(0x168E2990)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasySkillPanelChildWindowController___c__DisplayClass25_0_TypeDefinitionIndex = 89065;

	class UIMonsterFantasySkillPanelChildWindowController___c__DisplayClass25_0 : public ::System::Object
	{
	public:
		::MoleMole::UIMonsterFantasySkillPanelChildWindowController* __4__this; // 0x10
		::System::Boolean isLongPress; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _OnPointerUp_b__0(::MoleMole::TurnBattleEntityUnit* unit)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::TurnBattleEntityUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYSKILLPANELCHILDWINDOWCONTROLLER___C__DISPLAYCLASS25_0__ONPOINTERUP_B__0_OFFSET))(this, unit);
		}
	};
}
