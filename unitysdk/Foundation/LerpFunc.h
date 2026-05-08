#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int LerpFunc_TypeDefinitionIndex = 8891;

	enum class LerpFunc : ::System::Int32
	{
		SmoothStep = 16,
		EaseOut = 6,
		SmoothArrival = 14,
		Linear = 0,
		CircularIn = 11,
		SinInOut = 4,
		SinIn = 2,
		EaseInOut = 7,
		SinOut = 3,
		SmoothDeparture = 15,
		ExpoOut = 9,
		Step = 1,
		ExpoInOut = 10,
		CircularOut = 12,
		ExpoIn = 8,
		EaseIn = 5,
		CircularInOut = 13,
	};
}
