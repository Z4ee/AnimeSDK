#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonoUITimerCounter_TimeRandomType_TypeDefinitionIndex = 48184;

	enum class MonoUITimerCounter_TimeRandomType : ::System::Int32
	{
		HOUR_MIN_SECOND_RANDOM_ALONE = 1,
		MIN_MAX_ANY_RANDOM = 0,
	};
}
