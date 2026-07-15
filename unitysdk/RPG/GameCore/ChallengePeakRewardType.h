#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakRewardType_TypeDefinitionIndex = 12486;

	enum class ChallengePeakRewardType : ::System::Int32
	{
		NONE = 0,
		MOB_PASS_REWARD = 1,
		MOB_STAR_REWARD = 2,
		BOSS_STAR_REWARD = 3,
		BOSS_STAR_LIMIT_REWARD = 4,
		BOSS_COLOR_TARGET_REWARD = 5,
	};
}
