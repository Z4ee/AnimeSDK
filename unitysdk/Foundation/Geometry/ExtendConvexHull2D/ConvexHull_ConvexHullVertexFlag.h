#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertexFlag_TypeDefinitionIndex = 8938;

	enum class ConvexHull_ConvexHullVertexFlag : ::System::Int32
	{
		Line0 = 4,
		Line2 = 16,
		None = 0,
		Ellipse1 = 2,
		TotalBits = 6,
		LineBits = 4,
		Line1 = 8,
		EllipseBits = 2,
		Line3 = 32,
		LineMask = 60,
		EllipseMask = 3,
		Ellipse0 = 1,
	};
}
