#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int InterpolationMode_TypeDefinitionIndex = 42654;

	enum class InterpolationMode : ::System::Int32
	{
		None = 0,
		InOutCubic = 1,
		InOutQuintic = 2,
		InOutSine = 3,
		InQuintic = 4,
		InQuartic = 5,
		InCubic = 6,
		InQuadratic = 7,
		InElastic = 8,
		InElasticSmall = 9,
		InElasticBig = 10,
		InSine = 11,
		InBack = 12,
		OutQuintic = 13,
		OutQuartic = 14,
		OutCubic = 15,
		OutInCubic = 16,
		OutInQuartic = 17,
		OutElastic = 18,
		OutElasticSmall = 19,
		OutElasticBig = 20,
		OutSine = 21,
		OutBack = 22,
		OutBackCubic = 23,
		OutBackQuartic = 24,
		BackInCubic = 25,
		BackInQuartic = 26,
	};
}
