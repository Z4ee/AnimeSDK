#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion::Animation
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 27579;

	enum class EaseType : ::System::Int32
	{
		ElasticInOut = 24,
		QuadraticInOut = 3,
		ExponentialInOut = 15,
		Linear = 0,
		BounceIn = 25,
		QuarticIn = 4,
		QuadraticIn = 1,
		ElasticIn = 22,
		BackInOut = 30,
		ExponentialIn = 13,
		BackOut = 29,
		SinusoidalInOut = 21,
		QuarticOut = 5,
		BounceOut = 26,
		SinusoidalIn = 19,
		QuinticInOut = 9,
		QuinticOut = 8,
		BounceInOut = 27,
		CircularInOut = 18,
		QuinticIn = 7,
		CubicIn = 10,
		SinusoidalOut = 20,
		QuarticInOut = 6,
		CircularIn = 16,
		CircularOut = 17,
		QuadraticOut = 2,
		CubicInOut = 12,
		ExponentialOut = 14,
		ElasticOut = 23,
		BackIn = 28,
		CubicOut = 11,
	};
}
