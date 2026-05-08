#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Quality_TypeDefinitionIndex = 29639;

	enum class Quality : ::System::Int32
	{
		Ultra = 1,
		High = 2,
		Medium = 4,
		Low = 8,
		VeryLow = 12,
	};
}
