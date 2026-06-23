#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int LensFlareStyle_TypeDefinitionIndex = 26581;

	enum class LensFlareStyle : ::System::Int32
	{
		Distorted = 5,
		Custom = 0,
		MultiAverage = 2,
		Old = 3,
		OldFocused = 4,
		Average = 1,
	};
}
