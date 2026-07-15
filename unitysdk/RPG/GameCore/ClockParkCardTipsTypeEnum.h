#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkCardTipsTypeEnum_TypeDefinitionIndex = 10782;

	enum class ClockParkCardTipsTypeEnum : ::System::Int32
	{
		None = 0,
		Positive = 1,
		Negative = 2,
		EqualTo = 3,
		LessThan = 4,
		GreaterThan = 5,
		Ground = 6,
	};
}
