#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MatchThreeV2ConditionType_TypeDefinitionIndex = 11377;

	enum class MatchThreeV2ConditionType : ::System::Int32
	{
		None = 0,
		LevelMode = 1,
		OpponentType = 2,
		UnlockBattleItem = 3,
		UseBattleItem = 4,
	};
}
