#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ActivitySwordTrainingAvatarVOType_TypeDefinitionIndex = 59176;

	enum class ActivitySwordTrainingAvatarVOType : ::System::Int32
	{
		Unknown = 0,
		EnterTraining = 1,
		TrainingPageIdle = 2,
		TrainingLowMood = 3,
		StartTraining = 4,
		EnterSelectStoryLine = 5,
		LearnSkill = 7,
		DailySettle = 8,
		StoryTrigger = 9,
		RandomEvent = 10,
	};
}
