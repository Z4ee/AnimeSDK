#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertexFlag_TypeDefinitionIndex = 8858;

	enum class ConvexHull_ConvexHullVertexFlag : ::System::Int32
	{
		Line1 = 8,
		EllipseBits = 2,
		EllipseMask = 3,
		Line0 = 4,
		Ellipse1 = 2,
		TotalBits = 6,
		Line2 = 16,
		None = 0,
		LineBits = 4,
		Line3 = 32,
		Ellipse0 = 1,
		LineMask = 60,
	};
}
