#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::View::Battle { class FateRinBattleCardFlowRunner; }
namespace System { class Action; }

#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0xD01BDD0)
#define RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER___C__DISPLAYCLASS15_0__PLAYPROJECTIONREPLICATEFLOW_B__0_OFFSET UNITYSDK_OFFSET(0xD01D400)

namespace RPG::Client::FateRin::View::Battle
{
	inline static constexpr unsigned int FateRinBattleCardFlowRunner___c__DisplayClass15_0_TypeDefinitionIndex = 79342;

	class FateRinBattleCardFlowRunner___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::Action* onComplete; // 0x10
		::RPG::Client::FateRin::View::Battle::FateRinBattleCardFlowRunner* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _PlayProjectionReplicateFlow_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_VIEW_BATTLE_FATERINBATTLECARDFLOWRUNNER___C__DISPLAYCLASS15_0__PLAYPROJECTIONREPLICATEFLOW_B__0_OFFSET))(this);
		}
	};
}
