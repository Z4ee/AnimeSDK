#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EdgeStorage.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EdgeType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GETPOINT_OFFSET UNITYSDK_OFFSET(0x99FE10)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_ARCAREA_OFFSET UNITYSDK_OFFSET(0x99FC10)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_END_OFFSET UNITYSDK_OFFSET(0x99FD60)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x99FDF0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x99FE00)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MINX_OFFSET UNITYSDK_OFFSET(0x99FDE0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_START_OFFSET UNITYSDK_OFFSET(0x99FCE0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_1_OFFSET UNITYSDK_OFFSET(0x1BA62280)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_2_OFFSET UNITYSDK_OFFSET(0x1BA62370)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_OFFSET UNITYSDK_OFFSET(0x1BA62070)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x99FE80)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x99FE20)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int Edge_TypeDefinitionIndex = 8785;

	struct alignas(8) Edge
	{
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge* StaticGet_Null()
		{
			return (::Foundation::Geometry::ExtendConvexHull2D::Edge*)Il2CppClass::FromTypeDefinitionIndex(Edge_TypeDefinitionIndex)->GetStaticField(0x3F40);
		}
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EdgeType Type; // 0x10
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EdgeStorage Storage; // 0x18

		/*
		::System::Void _ctor(::Foundation::Geometry::Segment2D segment)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Segment2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_OFFSET))(this, segment);
		}
		*/

		/*
		::System::Void _ctor_1(::Foundation::Geometry::EllipseArc2D arc)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::EllipseArc2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE__CTOR_1_OFFSET))(this, arc);
		}
		*/

		::System::Single get_ArcArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_ARCAREA_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 get_Start()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_START_OFFSET))(this);
		}
		*/

		/*
		::UnityEngine::Vector2 get_End()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_END_OFFSET))(this);
		}
		*/

		::System::Single get_MinX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MINX_OFFSET))(this);
		}

		::System::Single get_MaxX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXX_OFFSET))(this);
		}

		::System::Single get_MaxY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GET_MAXY_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 GetPoint(::System::Single t)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_GETPOINT_OFFSET))(this, t);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge New(::Foundation::Geometry::Ellipse2D ellipse, ::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_OFFSET))(ellipse, start, end);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge New_1(::Foundation::Geometry::Ellipse2D ellipse, ::UnityEngine::Vector2 start)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::Foundation::Geometry::Ellipse2D, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_1_OFFSET))(ellipse, start);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::Edge New_2(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGE_NEW_2_OFFSET))(start, end);
		}
		*/
	};
}
