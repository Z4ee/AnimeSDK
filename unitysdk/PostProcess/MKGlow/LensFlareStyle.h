#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int LensFlareStyle_TypeDefinitionIndex = 27040;

	enum class LensFlareStyle : ::System::Int32
	{
		MultiAverage = 2,
		Distorted = 5,
		Average = 1,
		OldFocused = 4,
		Custom = 0,
		Old = 3,
	};
}
