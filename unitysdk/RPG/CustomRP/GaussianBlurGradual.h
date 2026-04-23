#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int GaussianBlurGradual_TypeDefinitionIndex = 35186;

	enum class GaussianBlurGradual : ::System::Int32
	{
		None = 0,
		Circle = 1,
		Direction = 2,
	};
}
