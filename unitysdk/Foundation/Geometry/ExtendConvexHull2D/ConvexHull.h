#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/EdgeMetaData.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CREATEPROJECTIONCONVEXHULL_1_OFFSET UNITYSDK_OFFSET(0x1DDA2710)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CREATEPROJECTIONCONVEXHULL_2_OFFSET UNITYSDK_OFFSET(0x1DDA2D50)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CREATEPROJECTIONCONVEXHULL_OFFSET UNITYSDK_OFFSET(0x1DDA24F0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CROSSCULLOUTAREA_OFFSET UNITYSDK_OFFSET(0x1DD9DB50)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLNOINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1DD9DF20)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLONEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1DD9C3A0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLPOINT_OFFSET UNITYSDK_OFFSET(0x1DD9D490)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLTWOINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1DD9CB90)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULL_OFFSET UNITYSDK_OFFSET(0x9D9D00)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_ENTERCULLOUTAREA_OFFSET UNITYSDK_OFFSET(0x1DD9D4F0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_EXITCULLOUTAREA_OFFSET UNITYSDK_OFFSET(0x1DD9D8D0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GENERATECONVEXHULLFROMCONVEXLINES_OFFSET UNITYSDK_OFFSET(0x1DDA1560)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GENERATECUSTOMEQUATIONXINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1DD9E890)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GENERATECUSTOMEQUATIONYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1DD9E740)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETCONVEXLINES_OFFSET UNITYSDK_OFFSET(0x1DD9F0C0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETEDGE_OFFSET UNITYSDK_OFFSET(0x9D9D80)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETLINEFROMCUSTOMEQUATION_OFFSET UNITYSDK_OFFSET(0x1DD9E9F0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETSPHEREPROJECTIONELLIPSE_OFFSET UNITYSDK_OFFSET(0x1DD9E250)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_AREA_OFFSET UNITYSDK_OFFSET(0x9D99F0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_EDGECOUNT_OFFSET UNITYSDK_OFFSET(0x325D00)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x9D99D0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x9D9990)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x9D9AE0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x9D9C20)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_MINX_OFFSET UNITYSDK_OFFSET(0x9D9A00)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_NULL_OFFSET UNITYSDK_OFFSET(0x1DD99A60)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_PUSHEDGE_OFFSET UNITYSDK_OFFSET(0x1DD9DCC0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9D9DA0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL__CTOR_OFFSET UNITYSDK_OFFSET(0x44DAC0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL__GENERATECONVEXHULLFROMCONVEXLINES_G__LINEINTERSECTION_44_0_OFFSET UNITYSDK_OFFSET(0x1DDA2200)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int ConvexHull_TypeDefinitionIndex = 8855;

	struct alignas(8) ConvexHull
	{
		::System::ReadOnlySpan_1<::UnityEngine::Vector2> Vertices; // 0x10
		::System::ReadOnlySpan_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> Edges; // 0x28

		::System::Void _ctor(::System::ReadOnlySpan_1<::UnityEngine::Vector2> vertices, ::System::ReadOnlySpan_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edges)
		{
			return ((::System::Void(*)(::PVOID, ::System::ReadOnlySpan_1<::UnityEngine::Vector2>, ::System::ReadOnlySpan_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL__CTOR_OFFSET))(this, vertices, edges);
		}

		/*
		::System::Void _ctor_1(::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer buffer, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL__CTOR_1_OFFSET))(this, buffer, count);
		}
		*/

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_ISVALID_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 get_EdgeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_EDGECOUNT_OFFSET))(this);
		}

		static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull get_Null()
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)())((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_NULL_OFFSET))();
		}

		::System::Single get_Area()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_AREA_OFFSET))(this);
		}

		::System::Single get_MinX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_MINX_OFFSET))(this);
		}

		::System::Single get_MaxX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_MAXX_OFFSET))(this);
		}

		::System::Single get_MaxY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GET_MAXY_OFFSET))(this);
		}

		/*
		::Foundation::Geometry::ExtendConvexHull2D::ConvexHull Cull(::Foundation::Geometry::AlgebraLine2D line, ::System::Boolean negative, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer storage, ::System::Single tolerance)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::PVOID, ::Foundation::Geometry::AlgebraLine2D, ::System::Boolean, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULL_OFFSET))(this, line, negative, storage, tolerance);
		}
		*/

		/*
		static ::System::ValueTuple_2<::System::Boolean, ::System::Boolean> CullPoint(::UnityEngine::Vector2 point, ::Foundation::Geometry::AlgebraLine2D line, ::System::Boolean negative, ::System::Double tolerance)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::Boolean>(*)(::UnityEngine::Vector2, ::Foundation::Geometry::AlgebraLine2D, ::System::Boolean, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLPOINT_OFFSET))(point, line, negative, tolerance);
		}
		*/

		/*
		static ::System::Void EnterCullOutArea(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::UnityEngine::Vector2 point, ::System::Boolean isStart, ::System::Boolean isEnd, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_ENTERCULLOUTAREA_OFFSET))(edge, point, isStart, isEnd, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		static ::System::Void ExitCullOutArea(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::UnityEngine::Vector2 point, ::System::Boolean isStart, ::System::Boolean isEnd, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_EXITCULLOUTAREA_OFFSET))(edge, point, isStart, isEnd, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		static ::System::Void CrossCullOutArea(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::UnityEngine::Vector2 point, ::System::Boolean isStart, ::System::Boolean isEnd, ::System::Boolean isEnter, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::UnityEngine::Vector2, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CROSSCULLOUTAREA_OFFSET))(edge, point, isStart, isEnd, isEnter, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		static ::System::Void PushEdge(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_PUSHEDGE_OFFSET))(edge, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		static ::System::Void CullNoIntersection(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::Foundation::Geometry::AlgebraLine2D line, ::System::Boolean negative, ::System::Double tolerance, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::Foundation::Geometry::AlgebraLine2D, ::System::Boolean, ::System::Double, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLNOINTERSECTION_OFFSET))(edge, line, negative, tolerance, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		static ::System::Void CullOneIntersection(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::UnityEngine::Vector2 intersection, ::Foundation::Geometry::AlgebraLine2D line, ::System::Boolean negative, ::System::Double tolerance, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::UnityEngine::Vector2, ::Foundation::Geometry::AlgebraLine2D, ::System::Boolean, ::System::Double, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLONEINTERSECTION_OFFSET))(edge, intersection, line, negative, tolerance, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		static ::System::Void CullTwoIntersection(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, ::Foundation::Geometry::AlgebraLine2D line, ::System::Boolean negative, ::System::Double tolerance, ::System::Int32& pointCount, ::System::Int32& edgeCount, ::System::Span_1<::UnityEngine::Vector2> pointStorage, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData> edgeMetaDataStorage)
		{
			return ((::System::Void(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::Foundation::Geometry::AlgebraLine2D, ::System::Boolean, ::System::Double, ::System::Int32&, ::System::Int32&, ::System::Span_1<::UnityEngine::Vector2>, ::System::Span_1<::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CULLTWOINTERSECTION_OFFSET))(edge, p1, p2, line, negative, tolerance, pointCount, edgeCount, pointStorage, edgeMetaDataStorage);
		}
		*/

		/*
		::Foundation::Geometry::ExtendConvexHull2D::Edge GetEdge(::System::Int32 index)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETEDGE_OFFSET))(this, index);
		}
		*/

		/*
		static ::System::Boolean GetSphereProjectionEllipse(::UnityEngine::Vector3 center, ::System::Single radius, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>& ellipse)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>&))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETSPHEREPROJECTIONELLIPSE_OFFSET))(center, radius, ellipse);
		}
		*/

		/*
		static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> GenerateCustomEquationYIntersection(::Foundation::Geometry::ConicSection2D expression)
		{
			return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GENERATECUSTOMEQUATIONYINTERSECTION_OFFSET))(expression);
		}
		*/

		/*
		static ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> GenerateCustomEquationXIntersection(::Foundation::Geometry::ConicSection2D expression)
		{
			return ((::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>(*)(::Foundation::Geometry::ConicSection2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GENERATECUSTOMEQUATIONXINTERSECTION_OFFSET))(expression);
		}
		*/

		/*
		static ::System::ReadOnlySpan_1<::System::Double> GetLineFromCustomEquation(::System::Double m, ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> e1, ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double> e2, ::System::Span_1<::System::Double> buffer, ::System::Double tolerance)
		{
			return ((::System::ReadOnlySpan_1<::System::Double>(*)(::System::Double, ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>, ::System::ValueTuple_5<::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double>, ::System::Span_1<::System::Double>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETLINEFROMCUSTOMEQUATION_OFFSET))(m, e1, e2, buffer, tolerance);
		}
		*/

		/*
		static ::System::ReadOnlySpan_1<::Foundation::Geometry::AlgebraLine2D> GetConvexLines(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> ellipse0, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> ellipse1, ::System::Span_1<::Foundation::Geometry::AlgebraLine2D> buffer, ::System::Double tolerance)
		{
			return ((::System::ReadOnlySpan_1<::Foundation::Geometry::AlgebraLine2D>(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::Span_1<::Foundation::Geometry::AlgebraLine2D>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GETCONVEXLINES_OFFSET))(ellipse0, ellipse1, buffer, tolerance);
		}
		*/

		/*
		static ::System::Int32 GenerateConvexHullFromConvexLines(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> e1, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> e2, ::System::ReadOnlySpan_1<::Foundation::Geometry::AlgebraLine2D> lines, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer storage, ::System::Single tolerance)
		{
			return ((::System::Int32(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::System::ReadOnlySpan_1<::Foundation::Geometry::AlgebraLine2D>, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_GENERATECONVEXHULLFROMCONVEXLINES_OFFSET))(e1, e2, lines, storage, tolerance);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull CreateProjectionConvexHull(::UnityEngine::Vector3 center, ::System::Single radius, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer storage, ::System::Single tolerance)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::UnityEngine::Vector3, ::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CREATEPROJECTIONCONVEXHULL_OFFSET))(center, radius, storage, tolerance);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull CreateProjectionConvexHull_1(::System::ReadOnlySpan_1<::UnityEngine::Vector3> vertices, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer storage, ::System::Single tolerance)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CREATEPROJECTIONCONVEXHULL_1_OFFSET))(vertices, storage, tolerance);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::ConvexHull CreateProjectionConvexHull_2(::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::System::Single radius, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer storage, ::System::Single tolerance)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::ConvexHull(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::Foundation::Geometry::ExtendConvexHull2D::ConvexHullBuffer, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL_CREATEPROJECTIONCONVEXHULL_2_OFFSET))(p0, p1, radius, storage, tolerance);
		}
		*/

		/*
		static ::UnityEngine::Vector2 _GenerateConvexHullFromConvexLines_g__LineIntersection_44_0(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D> e, ::Foundation::Geometry::AlgebraLine2D line)
		{
			return ((::UnityEngine::Vector2(*)(::Foundation::Geometry::ConicSection2D_1<::Foundation::Geometry::Ellipse2D>, ::Foundation::Geometry::AlgebraLine2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_CONVEXHULL__GENERATECONVEXHULLFROMCONVEXLINES_G__LINEINTERSECTION_44_0_OFFSET))(e, line);
		}
		*/
	};
}
