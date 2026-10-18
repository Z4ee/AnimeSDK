#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityFinalityBattle::Level
{
	inline static constexpr unsigned int FinalityBattleDifficultyLevel_TypeDefinitionIndex = 41910;

	enum class FinalityBattleDifficultyLevel : ::System::Int32
	{
		None = 0,
		Easy = 1,
		Hard = 2,
	};
}
