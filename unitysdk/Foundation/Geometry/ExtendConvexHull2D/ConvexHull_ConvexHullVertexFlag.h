#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertexFlag_TypeDefinitionIndex = 8765;

	enum class ConvexHull_ConvexHullVertexFlag : ::System::Int32
	{
		LineBits = 4,
		Line3 = 32,
		Line2 = 16,
		Ellipse0 = 1,
		EllipseBits = 2,
		Ellipse1 = 2,
		Line0 = 4,
		LineMask = 60,
		EllipseMask = 3,
		TotalBits = 6,
		Line1 = 8,
		None = 0,
	};
}
