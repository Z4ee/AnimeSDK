#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int Quality_TypeDefinitionIndex = 26985;

	enum class Quality : ::System::Int32
	{
		Medium = 4,
		High = 2,
		Ultra = 1,
		VeryLow = 12,
		Low = 8,
	};
}
