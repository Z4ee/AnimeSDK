#pragma once
#include "unitysdk/unitysdk.h"

namespace Dest::Math
{
	inline static constexpr unsigned int IntersectionTypes_TypeDefinitionIndex = 6634;

	enum class IntersectionTypes : ::System::Int32
	{
		Empty = 0,
		Point = 1,
		Segment = 2,
		Ray = 3,
		Line = 4,
		Polygon = 5,
		Plane = 6,
		Polyhedron = 7,
		Other = 8,
	};
}
