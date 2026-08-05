#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TimePeriodTypeFlag_TypeDefinitionIndex = 45501;

	enum class TimePeriodTypeFlag : ::System::Int32
	{
		AFTERNOON = 4,
		MORNING = 2,
		NIGHT = 16,
		EVENING = 8,
	};
}
