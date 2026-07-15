#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleGlobalDataType_TypeDefinitionIndex = 14980;

	enum class BattleGlobalDataType : ::System::Int32
	{
		TeammateAlive = 0,
		EnemyAlive = 1,
		TeamBoostPoint = 2,
		EnemyBoostPoint = 3,
		TargetNeighbourCount = 4,
		SelfNeighbourCount = 5,
		TurnCount = 6,
		LightTeamTurnCount = 7,
		SelectableEnemyAlive = 8,
	};
}
