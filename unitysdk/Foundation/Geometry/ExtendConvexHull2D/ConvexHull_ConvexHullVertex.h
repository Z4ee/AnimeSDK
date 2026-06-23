#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/ConvexHull_ConvexHullVertexFlag.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CONVEXHULLVERTEX_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x246290)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CONVEXHULLVERTEX__CTOR_OFFSET UNITYSDK_OFFSET(0x332CF0)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_ConvexHullVertex_TypeDefinitionIndex = 8764;

	struct alignas(4) ConvexHull_ConvexHullVertex
	{
		::UnityEngine::Vector2 Point; // 0x10
		::Foundation::Geometry::ExtendConvexHull2D::ConvexHull_ConvexHullVertexFlag Flag; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 point, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull_ConvexHullVertexFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull_ConvexHullVertexFlag))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CONVEXHULLVERTEX__CTOR_OFFSET))(this, point, flag);
		}

		::UnityEngine::Vector2 get_Position()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CONVEXHULLVERTEX_GET_POSITION_OFFSET))(this);
		}
	};
}
