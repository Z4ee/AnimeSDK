#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyInterpolation_TypeDefinitionIndex = 39048;

	enum class CurvyInterpolation : ::System::Int32
	{
		CatmullRom = 1,
		TCB = 2,
		Linear = 0,
		BSpline = 4,
		Bezier = 3,
	};
}
