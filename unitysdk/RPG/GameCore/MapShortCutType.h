#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapShortCutType_TypeDefinitionIndex = 12092;

	enum class MapShortCutType : ::System::Int32
	{
		NONE = 0,
		WORLD_LEVEL_REWARD = 1,
		CHALLENGE_TIP = 2,
		ROGUE_LEVEL_UNLOCK = 3,
		ROGUE_SCORE_REWARD_REFRESH = 4,
		SHOP_SCORE_REWARD = 5,
		ROGUE_SCORE_REWARD_TO_GET = 7,
		ROGUE_HAND_BOOK_REWARD_TO_GET = 8,
		CHALLENGE_NEW_GROUP_UNLOCK = 9,
		NEW_SHOP_GOOD_ADDED = 10,
		CHALLENGE_MEMORY_NEW_SCHEDULE_GROUP_UNLOCK = 11,
		CHALLENGE_STORY_NEW_SCHEDULE_GROUP_UNLOCK = 12,
		CHALLENGE_STORY_TIP = 13,
		OFFERING_REWARD = 14,
		MAINMISSION_TODO = 15,
		ChallengeBossNew = 16,
		ChallengeBossReward = 17,
		TrainVisitorReward = 18,
		PAM_SKIN_NEW = 19,
		OFFERING_REWARD_UPGRADE = 20,
		CHALLENGE_PEAK_NEW = 21,
		CHALLENGE_PEAK_REWARD = 22,
	};
}
