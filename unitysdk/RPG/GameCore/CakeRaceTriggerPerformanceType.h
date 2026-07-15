#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceTriggerPerformanceType_TypeDefinitionIndex = 10631;

	enum class CakeRaceTriggerPerformanceType : ::System::Int32
	{
		RollingToast = 0,
		FindTarget = 1,
		Comment = 2,
		SpecialComment = 3,
		BubbleGuess = 6,
		BubbleFight = 7,
		BubbleHandBook = 8,
		BubbleTitle = 9,
	};
}
