#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleItemProgressPrefabType_TypeDefinitionIndex = 24726;

	enum class BattleItemProgressPrefabType : ::System::Int32
	{
		RogueFormula = 0,
		FightActivity = 1,
		ActivityFinalityBattle = 2,
	};
}
