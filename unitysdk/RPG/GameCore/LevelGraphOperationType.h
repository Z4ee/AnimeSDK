#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGraphOperationType_TypeDefinitionIndex = 10484;

	enum class LevelGraphOperationType : ::System::Int32
	{
		TriggerBattlePerform = 0,
		BattlePerformStorySelect = 1,
	};
}
