#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int TimerClock_EStateTag_TypeDefinitionIndex = 8253;

	enum class TimerClock_EStateTag : ::System::Int32
	{
		New = 0,
		DisPospose = 1,
	};
}
