#pragma once
#include "unitysdk/unitysdk.h"

namespace PostProcess::MKGlow
{
	inline static constexpr unsigned int GlareStyle_TypeDefinitionIndex = 27816;

	enum class GlareStyle : ::System::Int32
	{
		Tri = 2,
		Custom = 0,
		Flake = 6,
		Line = 1,
		Cross = 3,
		Star = 5,
		DistortedCross = 4,
	};
}
