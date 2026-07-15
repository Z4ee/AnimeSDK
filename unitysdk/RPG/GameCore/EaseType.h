#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EaseType_TypeDefinitionIndex = 10159;

	enum class EaseType : ::System::Int32
	{
		Linear = 0,
		InSine = 1,
		OutSine = 2,
		InOutSine = 3,
		InQuad = 4,
		OutQuad = 5,
		InOutQuad = 6,
		InCubic = 7,
		OutCubic = 8,
		InOutCubic = 9,
		InQuart = 10,
		OutQuart = 11,
		InOutQuart = 12,
		InQuint = 13,
		OutQuint = 14,
		InOutQuint = 15,
		InExpo = 16,
		OutExpo = 17,
		InOutExpo = 18,
		InCirc = 19,
		OutCirc = 20,
		InOutCirc = 21,
		Custom = 22,
	};
}
