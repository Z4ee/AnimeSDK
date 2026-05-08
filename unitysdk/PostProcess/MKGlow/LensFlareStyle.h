#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int LensFlareStyle_TypeDefinitionIndex = 29642;

	enum class LensFlareStyle : ::System::Int32
	{
		Custom = 0,
		Average = 1,
		MultiAverage = 2,
		Old = 3,
		OldFocused = 4,
		Distorted = 5,
	};
}
