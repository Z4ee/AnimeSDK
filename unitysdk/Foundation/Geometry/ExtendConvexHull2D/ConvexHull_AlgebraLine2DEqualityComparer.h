#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_ALGEBRALINE2DEQUALITYCOMPARER_EQUALS_OFFSET UNITYSDK_OFFSET(0xA80020)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_ALGEBRALINE2DEQUALITYCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x55FE60)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_AlgebraLine2DEqualityComparer_TypeDefinitionIndex = 8763;

	struct alignas(4) ConvexHull_AlgebraLine2DEqualityComparer
	{
		::System::Single _tolerance; // 0x10

		::System::Void _ctor(::System::Single tolerance)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_ALGEBRALINE2DEQUALITYCOMPARER__CTOR_OFFSET))(this, tolerance);
		}

		/*
		::System::Boolean Equals(::Foundation::Geometry::AlgebraLine2D left, ::Foundation::Geometry::AlgebraLine2D right)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::Geometry::AlgebraLine2D, ::Foundation::Geometry::AlgebraLine2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_ALGEBRALINE2DEQUALITYCOMPARER_EQUALS_OFFSET))(this, left, right);
		}
		*/
	};
}
