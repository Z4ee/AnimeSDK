#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSectionType_TypeDefinitionIndex = 8691;

	enum class ConicSectionType : ::System::Int32
	{
		Hyperbola = 5,
		Ellipse = 3,
		IntersectingLines = 2,
		Parabola = 4,
		ParallelLines = 1,
		SingularPoint = 0,
	};
}
