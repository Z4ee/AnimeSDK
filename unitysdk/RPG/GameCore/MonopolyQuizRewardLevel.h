#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyQuizRewardLevel_TypeDefinitionIndex = 11588;

	enum class MonopolyQuizRewardLevel : ::System::Int32
	{
		None = 0,
		RewardLevelS = 1,
		RewardLevelA = 2,
		RewardLevelB = 3,
		RewardLevelC = 4,
	};
}
