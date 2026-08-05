#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/AlgebraLine2D.h"
#include "unitysdk/Foundation/Geometry/EIntersectionResult.h"
#include "unitysdk/Foundation/Geometry/EllipseArc2D.h"
#include "unitysdk/Foundation/Geometry/ExtendConvexHull2D/Edge.h"
#include "unitysdk/Foundation/Geometry/Segment2D.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_INTERSECTION2D_LINEINTERSECTION_1_OFFSET UNITYSDK_OFFSET(0x1F75F480)
#define FOUNDATION_GEOMETRY_INTERSECTION2D_LINEINTERSECTION_2_OFFSET UNITYSDK_OFFSET(0x1F760980)
#define FOUNDATION_GEOMETRY_INTERSECTION2D_LINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1F75F250)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int Intersection2D_TypeDefinitionIndex = 8514;

	class Intersection2D : public ::System::Object
	{
	public:
		static ::Foundation::Geometry::EIntersectionResult LineIntersection(::Foundation::Geometry::Segment2D segment, ::Foundation::Geometry::AlgebraLine2D line, ::System::Span_1<::UnityEngine::Vector2> result, ::System::Double tolerance)
		{
			return ((::Foundation::Geometry::EIntersectionResult(*)(::Foundation::Geometry::Segment2D, ::Foundation::Geometry::AlgebraLine2D, ::System::Span_1<::UnityEngine::Vector2>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_INTERSECTION2D_LINEINTERSECTION_OFFSET))(segment, line, result, tolerance);
		}

		static ::Foundation::Geometry::EIntersectionResult LineIntersection_1(::Foundation::Geometry::EllipseArc2D arc, ::Foundation::Geometry::AlgebraLine2D line, ::System::Span_1<::UnityEngine::Vector2> result, ::System::Double tolerance)
		{
			return ((::Foundation::Geometry::EIntersectionResult(*)(::Foundation::Geometry::EllipseArc2D, ::Foundation::Geometry::AlgebraLine2D, ::System::Span_1<::UnityEngine::Vector2>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_INTERSECTION2D_LINEINTERSECTION_1_OFFSET))(arc, line, result, tolerance);
		}

		static ::Foundation::Geometry::EIntersectionResult LineIntersection_2(::Foundation::Geometry::ExtendConvexHull2D::Edge edge, ::Foundation::Geometry::AlgebraLine2D line, ::System::Span_1<::UnityEngine::Vector2> result, ::System::Double tolerance)
		{
			return ((::Foundation::Geometry::EIntersectionResult(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge, ::Foundation::Geometry::AlgebraLine2D, ::System::Span_1<::UnityEngine::Vector2>, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_INTERSECTION2D_LINEINTERSECTION_2_OFFSET))(edge, line, result, tolerance);
		}
	};
}
