#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/EllipseArc2D.h"
#include "unitysdk/Foundation/Geometry/Segment2D.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Geometry::__details_of_ExtendConvexHull2D
{
	inline static constexpr unsigned int EdgeStorage_TypeDefinitionIndex = 8734;

	struct alignas(8) EdgeStorage
	{
		::Foundation::Geometry::Segment2D Segment; // 0x10
		::Foundation::Geometry::EllipseArc2D EllipseArc; // 0x10
	};
}
