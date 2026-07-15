#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingEffectType_TypeDefinitionIndex = 11940;

	enum class SwordTrainingEffectType : ::System::Int32
	{
		None = 0,
		Test = 1,
		AddMood = 2,
		SubMood = 3,
		AddTrainRatio = 4,
		SubTrainRatio = 5,
		AddSkillPoint = 6,
		AddStatus = 7,
		AddInitialStatus = 8,
		AddActionRatioById = 9,
		AddTrainRatioWithActionCnt = 10,
		AddMoodCostRatio = 11,
		SubMoodCostRatio = 12,
		AddMoodIncreaseValue = 13,
		SubMoodIncreaseValue = 14,
		AddActionLevel = 15,
		AddStatusIncreaseValue = 16,
		AddSkillPointIncreaseValue = 17,
		AddMoodLimit = 18,
		AddActionLevelTemporary = 19,
		ReverseMoodRatioAndEnhance = 20,
		SetMinimumMoodValue = 21,
		AddStatusByRemainMood = 22,
		ExtraTargetStatusGetRatio = 23,
		AddEffectsPostAction = 24,
		SetMoodLimit = 25,
		AddStatusLimit = 26,
		AddSActionLevelLimit = 27,
		AddRandomStatus = 28,
		AddStatusByOverflowMood = 29,
		AddCurrentTrainRatioByRemainMood = 30,
		AddActionLevelLimit = 31,
	};
}
