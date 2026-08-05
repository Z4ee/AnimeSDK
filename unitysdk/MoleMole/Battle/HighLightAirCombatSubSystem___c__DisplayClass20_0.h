#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelRamielCrosshairChildWindowController; }
namespace MoleMole::Battle { class HighLightAirCombatSubSystem; }

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x114490A0)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS20_0__SETCROSSHAIRVISIBLE_B__0_OFFSET UNITYSDK_OFFSET(0x114490B0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem___c__DisplayClass20_0_TypeDefinitionIndex = 68744;

	class HighLightAirCombatSubSystem___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::MoleMole::Battle::HighLightAirCombatSubSystem* __4__this; // 0x10
		::MoleMole::UIInLevelRamielCrosshairChildWindowController* controller; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Void _SetCrosshairVisible_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS20_0__SETCROSSHAIRVISIBLE_B__0_OFFSET))(this);
		}
	};
}
