#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_FINDMINPOINTANDPLACEITATFIRST_OFFSET UNITYSDK_OFFSET(0x9B02B0)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_SCANPOINTSANDBUILDCONVEXHULL_OFFSET UNITYSDK_OFFSET(0x9B04A0)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_SOLVE_OFFSET UNITYSDK_OFFSET(0x9AFC10)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_SORTPOINTSBYPOLARANDDISTANCE_OFFSET UNITYSDK_OFFSET(0x9B03A0)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x2E41C0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConvexHull2D_ConvexHullGrahamSolver_TypeDefinitionIndex = 8962;

	struct alignas(8) ConvexHull2D_ConvexHullGrahamSolver
	{
		::System::Span_1<::UnityEngine::Vector2> _points; // 0x10

		::System::Void _ctor(::System::Span_1<::UnityEngine::Vector2> points)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER__CTOR_OFFSET))(this, points);
		}

		::System::Int32 Solve()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_SOLVE_OFFSET))(this);
		}

		::System::Void FindMinPointAndPlaceItAtFirst()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_FINDMINPOINTANDPLACEITATFIRST_OFFSET))(this);
		}

		::System::Void SortPointsByPolarAndDistance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_SORTPOINTSBYPOLARANDDISTANCE_OFFSET))(this);
		}

		::System::Int32 ScanPointsAndBuildConvexHull()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_CONVEXHULLGRAHAMSOLVER_SCANPOINTSANDBUILDCONVEXHULL_OFFSET))(this);
		}
	};
}
