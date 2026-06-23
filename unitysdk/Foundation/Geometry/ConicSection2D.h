#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/ConicSectionType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_CONICSECTION2D_GENERATEQUADRATICEQUATIONX_OFFSET UNITYSDK_OFFSET(0x988180)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GENERATEQUADRATICEQUATIONY_OFFSET UNITYSDK_OFFSET(0x988220)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GETNORMAL_OFFSET UNITYSDK_OFFSET(0x988100)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GETSCALE_OFFSET UNITYSDK_OFFSET(0x1C989F30)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GETTANGENTLINEXINTERSECTION_OFFSET UNITYSDK_OFFSET(0x9896C0)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GETTANGENTLINEYINTERSECTION_OFFSET UNITYSDK_OFFSET(0x989320)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GETTANGENTPOINT_OFFSET UNITYSDK_OFFSET(0x989A60)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GETTYPE_OFFSET UNITYSDK_OFFSET(0x1C98A040)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GET_ELLIPSE_OFFSET UNITYSDK_OFFSET(0x988F80)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_GET_ISELLIPSE_OFFSET UNITYSDK_OFFSET(0x9880F0)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_INTERSECTIONSOFLINE_OFFSET UNITYSDK_OFFSET(0x9882B0)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_NEW_1_OFFSET UNITYSDK_OFFSET(0x1C989DD0)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_NEW_OFFSET UNITYSDK_OFFSET(0x1C989AF0)
#define FOUNDATION_GEOMETRY_CONICSECTION2D_SOLVE_OFFSET UNITYSDK_OFFSET(0x1C985900)
#define FOUNDATION_GEOMETRY_CONICSECTION2D__CTOR_OFFSET UNITYSDK_OFFSET(0x98BEA0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConicSection2D_TypeDefinitionIndex = 8421;

	struct alignas(8) ConicSection2D
	{
		::System::Double A; // 0x10
		::System::Double B; // 0x18
		::System::Double C; // 0x20
		::System::Double D; // 0x28
		::System::Double E; // 0x30
		::System::Double F; // 0x38
		::Foundation::Geometry::ConicSectionType _type; // 0x40

		::System::Void _ctor(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d, ::System::Double e, ::System::Double f)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D__CTOR_OFFSET))(this, a, b, c, d, e, f);
		}

		::System::Boolean get_IsEllipse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GET_ISELLIPSE_OFFSET))(this);
		}

		/*
		::UnityEngine::Vector2 GetNormal(::UnityEngine::Vector2 point)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GETNORMAL_OFFSET))(this, point);
		}
		*/

		/*
		static ::System::Int32 Solve(::System::Double a, ::System::Double b, ::System::Double c, ::System::Span_1<::System::Double> result, ::System::Double tolerance)
		{
			return ((::System::Int32(*)(::System::Double, ::System::Double, ::System::Double, ::System::Span_1<::System::Double>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_SOLVE_OFFSET))(a, b, c, result, tolerance);
		}
		*/

		/*
		::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double> GenerateQuadraticEquationX(::System::Double k, ::System::Double p)
		{
			return ((::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double>(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GENERATEQUADRATICEQUATIONX_OFFSET))(this, k, p);
		}
		*/

		/*
		::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double> GenerateQuadraticEquationY(::System::Double k, ::System::Double p)
		{
			return ((::System::ValueTuple_3<::System::Double, ::System::Double, ::System::Double>(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GENERATEQUADRATICEQUATIONY_OFFSET))(this, k, p);
		}
		*/

		/*
		::System::Int32 IntersectionsOfLine(::Foundation::Geometry::AlgebraLine2D line, ::System::Span_1<::UnityEngine::Vector2> result, ::System::Double tolerance)
		{
			return ((::System::Int32(*)(::PVOID, ::Foundation::Geometry::AlgebraLine2D, ::System::Span_1<::UnityEngine::Vector2>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_INTERSECTIONSOFLINE_OFFSET))(this, line, result, tolerance);
		}
		*/

		/*
		::System::Nullable_1<::Foundation::Geometry::Ellipse2D> get_Ellipse()
		{
			return ((::System::Nullable_1<::Foundation::Geometry::Ellipse2D>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GET_ELLIPSE_OFFSET))(this);
		}
		*/

		/*
		::System::Int32 GetTangentLineYIntersection(::System::Double k, ::System::Span_1<::System::Double> result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Span_1<::System::Double>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GETTANGENTLINEYINTERSECTION_OFFSET))(this, k, result);
		}
		*/

		/*
		::System::Int32 GetTangentLineXIntersection(::System::Double k, ::System::Span_1<::System::Double> result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Span_1<::System::Double>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GETTANGENTLINEXINTERSECTION_OFFSET))(this, k, result);
		}
		*/

		/*
		::System::Int32 GetTangentPoint(::System::Single slope, ::System::Span_1<::UnityEngine::Vector2> result)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Span_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GETTANGENTPOINT_OFFSET))(this, slope, result);
		}
		*/

		static ::Foundation::Geometry::ConicSection2D New(::System::Single a, ::System::Single b, ::System::Single c, ::System::Single d, ::System::Single e, ::System::Single f)
		{
			return ((::Foundation::Geometry::ConicSection2D(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_NEW_OFFSET))(a, b, c, d, e, f);
		}

		/*
		static ::Foundation::Geometry::ConicSection2D New_1(::Foundation::Geometry::Ellipse2D ellipse)
		{
			return ((::Foundation::Geometry::ConicSection2D(*)(::Foundation::Geometry::Ellipse2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_NEW_1_OFFSET))(ellipse);
		}
		*/

		static ::System::Double GetScale(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d, ::System::Double e, ::System::Double f)
		{
			return ((::System::Double(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GETSCALE_OFFSET))(a, b, c, d, e, f);
		}

		static ::Foundation::Geometry::ConicSectionType GetType(::System::Double a, ::System::Double b, ::System::Double c, ::System::Double d, ::System::Double e, ::System::Double f)
		{
			return ((::Foundation::Geometry::ConicSectionType(*)(::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONICSECTION2D_GETTYPE_OFFSET))(a, b, c, d, e, f);
		}
	};
}
