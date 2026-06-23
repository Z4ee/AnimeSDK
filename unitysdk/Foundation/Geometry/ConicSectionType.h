#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSectionType_TypeDefinitionIndex = 8774;

	enum class ConicSectionType : ::System::Int32
	{
		ParallelLines = 1,
		Hyperbola = 5,
		IntersectingLines = 2,
		Ellipse = 3,
		Parabola = 4,
		SingularPoint = 0,
	};
}
