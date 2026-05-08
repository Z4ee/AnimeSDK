#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int GlareStyle_TypeDefinitionIndex = 29643;

	enum class GlareStyle : ::System::Int32
	{
		Custom = 0,
		Line = 1,
		Tri = 2,
		Cross = 3,
		DistortedCross = 4,
		Star = 5,
		Flake = 6,
	};
}
