#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooQuestType_TypeDefinitionIndex = 11885;

	enum class SpaceZooQuestType : ::System::Int32
	{
		None = 0,
		TimeLimitedReward = 1,
		TimeLimitedFinalReward = 2,
		HandBookResidentReward = 3,
		FeatureResidentReward = 4,
	};
}
