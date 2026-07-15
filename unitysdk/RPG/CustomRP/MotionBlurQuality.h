#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurQuality_TypeDefinitionIndex = 36284;

	enum class MotionBlurQuality : ::System::Int32
	{
		Low = 0,
		Medium = 1,
		High = 2,
		Ultra = 3,
	};
}
