#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TarotBookConditionType_TypeDefinitionIndex = 14835;

	enum class TarotBookConditionType : ::System::Int32
	{
		None = 0,
		ShowUIPage = 1,
		TakeSubmission = 2,
		HourDuration = 3,
		IdleSeconds = 4,
		StoryUnlock = 5,
		UnlockedStoryCountGreater = 6,
		FinishInteraction = 7,
		ExecutedInteraction = 8,
		NewStory = 9,
		EnergyCount = 10,
		CardCount = 11,
		ReplayCount = 12,
		CharacterDetailShowSeconds = 13,
		ShowCover = 14,
		DayOfWeek = 15,
		MaxStoryFinished = 16,
		FinishSubmission = 17,
	};
}
