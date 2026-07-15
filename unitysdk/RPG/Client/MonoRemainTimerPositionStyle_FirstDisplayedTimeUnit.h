#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit_TypeDefinitionIndex = 69316;

	enum class MonoRemainTimerPositionStyle_FirstDisplayedTimeUnit : ::System::Int32
	{
		DependOnRemainTime = 0,
		Day = 1,
		Hour = 2,
		Minute = 3,
		Second = 4,
	};
}
