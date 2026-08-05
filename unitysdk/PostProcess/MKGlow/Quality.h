#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Quality_TypeDefinitionIndex = 27379;

	enum class Quality : ::System::Int32
	{
		VeryLow = 12,
		Ultra = 1,
		High = 2,
		Low = 8,
		Medium = 4,
	};
}
