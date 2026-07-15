#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesProperty_TypeDefinitionIndex = 17716;

	enum class ChenLingFesProperty : ::System::Int32
	{
		ItemCoinNum = 0,
		Bonus = 1,
		ItemCoinNumMultiplier = 2,
		SummonQueueCount = 3,
		Fever = 4,
		Level = 5,
		AbilityLoopInterval = 6,
		MaxTriggerNum = 7,
		TriggerNum = 8,
		TriggerProbability = 9,
		RemainingTriggerNum = 10,
		ItemCoinNumSecondMultiplier = 11,
	};
}
