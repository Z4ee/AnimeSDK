#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/EdgeMetaData.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x2E8B50)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_SET_1_OFFSET UNITYSDK_OFFSET(0x9B0A40)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_SET_2_OFFSET UNITYSDK_OFFSET(0x9B0AD0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_SET_OFFSET UNITYSDK_OFFSET(0x9B0990)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0x43EB10)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHullBuffer_TypeDefinitionIndex = 8812;

	struct alignas(8) ConvexHullBuffer
	{
		::System::Span_1<::UnityEngine::Vector2> Vertices; // 0x10
		::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> Edges; // 0x28

		::System::Void _ctor(::System::Span_1<::UnityEngine::Vector2> vertices, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edges)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER__CTOR_OFFSET))(this, vertices, edges);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_GET_LENGTH_OFFSET))(this);
		}

		/*
		::System::Void Set(::System::Int32 index, ::Foundation::Geometry::EllipseArc2D arc)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Foundation::Geometry::EllipseArc2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_SET_OFFSET))(this, index, arc);
		}
		*/

		::System::Void Set_1(::System::Int32 index, ::UnityEngine::Vector2 point)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_SET_1_OFFSET))(this, index, point);
		}

		/*
		::System::Void Set_2(::System::Int32 index, ::UnityEngine::Vector2 start, ::Foundation::Geometry::Ellipse2D ellipse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector2, ::Foundation::Geometry::Ellipse2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULLBUFFER_SET_2_OFFSET))(this, index, start, ellipse);
		}
		*/
	};
}
