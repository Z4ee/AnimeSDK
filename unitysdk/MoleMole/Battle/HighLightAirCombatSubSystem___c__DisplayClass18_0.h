#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelRamielCrosshairChildWindowController; }
namespace MoleMole::Battle { class HighLightAirCombatSubSystem; }

#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS18_0__CLOSECROSSHAIRWINDOW_B__0_OFFSET UNITYSDK_OFFSET(0x150D9D60)
#define MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS18_0__CTOR_OFFSET UNITYSDK_OFFSET(0x150D9D50)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int HighLightAirCombatSubSystem___c__DisplayClass18_0_TypeDefinitionIndex = 68742;

	class HighLightAirCombatSubSystem___c__DisplayClass18_0 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelRamielCrosshairChildWindowController* controller; // 0x10
		::MoleMole::Battle::HighLightAirCombatSubSystem* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS18_0__CTOR_OFFSET))(this);
		}

		::System::Void _CloseCrosshairWindow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_HIGHLIGHTAIRCOMBATSUBSYSTEM___C__DISPLAYCLASS18_0__CLOSECROSSHAIRWINDOW_B__0_OFFSET))(this);
		}
	};
}
