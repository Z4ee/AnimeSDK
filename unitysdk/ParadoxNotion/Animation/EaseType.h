#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 31253;

	enum class EaseType : ::System::Int32
	{
		QuadraticInOut = 3,
		SinusoidalInOut = 21,
		QuarticIn = 4,
		QuinticIn = 7,
		BackOut = 29,
		SinusoidalIn = 19,
		CubicInOut = 12,
		ExponentialInOut = 15,
		ElasticInOut = 24,
		ExponentialIn = 13,
		QuadraticOut = 2,
		ExponentialOut = 14,
		ElasticOut = 23,
		BackIn = 28,
		CubicIn = 10,
		SinusoidalOut = 20,
		BounceIn = 25,
		ElasticIn = 22,
		CircularIn = 16,
		CircularOut = 17,
		CircularInOut = 18,
		QuinticOut = 8,
		BounceOut = 26,
		QuadraticIn = 1,
		QuinticInOut = 9,
		QuarticInOut = 6,
		QuarticOut = 5,
		BounceInOut = 27,
		BackInOut = 30,
		CubicOut = 11,
		Linear = 0,
	};
}
