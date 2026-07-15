#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MotionBlurMethod_TypeDefinitionIndex = 36283;

	enum class MotionBlurMethod : ::System::Int32
	{
		Original = 0,
		Unity = 1,
		UEUnified = 2,
	};
}
