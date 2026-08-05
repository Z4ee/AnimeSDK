#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyInterpolation_TypeDefinitionIndex = 39593;

	enum class CurvyInterpolation : ::System::Int32
	{
		Linear = 0,
		TCB = 2,
		CatmullRom = 1,
		Bezier = 3,
		BSpline = 4,
	};
}
