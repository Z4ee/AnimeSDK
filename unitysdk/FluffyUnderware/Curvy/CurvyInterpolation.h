#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyInterpolation_TypeDefinitionIndex = 37183;

	enum class CurvyInterpolation : ::System::Int32
	{
		Linear = 0,
		CatmullRom = 1,
		TCB = 2,
		Bezier = 3,
		BSpline = 4,
	};
}
