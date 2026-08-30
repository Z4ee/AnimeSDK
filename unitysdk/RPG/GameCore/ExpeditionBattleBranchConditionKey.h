#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ExpeditionBattleBranchConditionKey_TypeDefinitionIndex = 16022;

	enum class ExpeditionBattleBranchConditionKey : ::System::Int32
	{
		None = 0,
		RouteID = 1,
		WaveIndex = 2,
		RouteIsWin = 3,
		IsBattleFinished = 4,
		Stage = 5,
		IsAllDead = 6,
		HasMemberDead = 7,
		BattleUseRound = 8,
	};
}
