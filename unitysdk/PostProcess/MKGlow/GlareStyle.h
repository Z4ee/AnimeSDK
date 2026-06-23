#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int GlareStyle_TypeDefinitionIndex = 26848;

	enum class GlareStyle : ::System::Int32
	{
		Cross = 3,
		Tri = 2,
		Flake = 6,
		Custom = 0,
		Line = 1,
		Star = 5,
		DistortedCross = 4,
	};
}
