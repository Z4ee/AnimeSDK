#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideChallengeType_TypeDefinitionIndex = 10546;

	enum class AetherDivideChallengeType : ::System::Int32
	{
		Common = 0,
		GymBoss = 1,
		StoryBattle = 2,
		Infinite = 3,
	};
}
