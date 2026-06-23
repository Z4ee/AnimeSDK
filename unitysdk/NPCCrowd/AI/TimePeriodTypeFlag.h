#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimePeriodTypeFlag_TypeDefinitionIndex = 46340;

	enum class TimePeriodTypeFlag : ::System::Int32
	{
		NIGHT = 16,
		MORNING = 2,
		EVENING = 8,
		AFTERNOON = 4,
	};
}
