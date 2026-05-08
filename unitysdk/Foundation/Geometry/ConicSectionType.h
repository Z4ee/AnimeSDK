#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSectionType_TypeDefinitionIndex = 8934;

	enum class ConicSectionType : ::System::Int32
	{
		SingularPoint = 0,
		IntersectingLines = 2,
		Parabola = 4,
		Hyperbola = 5,
		Ellipse = 3,
		ParallelLines = 1,
	};
}
