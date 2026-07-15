#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattlePreloadPhase_TypeDefinitionIndex = 57021;

	enum class BattlePreloadPhase : ::System::Int32
	{
		None = 0,
		BeforeEnterAdventure = 1,
		AfterEnterAdventure = 2,
		BeforeSwitchMap = 3,
		BeforeLeaveAdventure = 4,
		BeforeEnterBattle = 5,
		AfterEnterBattle = 6,
		BeforeRestartBattle = 7,
		BeforeLeaveBattle = 8,
		BeforeEnterBattleNew = 9,
		AfterEnterBattleNew = 10,
		BeforeLeaveBattleNew = 11,
	};
}
