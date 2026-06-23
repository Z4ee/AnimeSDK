#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/Ellipse2D.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA_GENERATE_1_OFFSET UNITYSDK_OFFSET(0xA6F0D0)
#define FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA_GENERATE_OFFSET UNITYSDK_OFFSET(0xA6EE50)
#define FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x338C30)
#define FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x338C30)

namespace Foundation::Geometry::__details_of_ExtendConvexHull2D
{
	inline static constexpr unsigned int EllipseArcEdgeMetaData_TypeDefinitionIndex = 8798;

	struct alignas(8) EllipseArcEdgeMetaData
	{
		::Foundation::Geometry::Ellipse2D _ellipse; // 0x10

		/*
		::System::Void _ctor(::Foundation::Geometry::EllipseArc2D arc)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::EllipseArc2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA__CTOR_OFFSET))(this, arc);
		}
		*/

		::System::Void _ctor_1(::Foundation::Geometry::Ellipse2D ellipse)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::Ellipse2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA__CTOR_1_OFFSET))(this, ellipse);
		}

		/*
		::Foundation::Geometry::ExtendConvexHull2D::Edge Generate(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA_GENERATE_OFFSET))(this, start, end);
		}
		*/

		/*
		::Foundation::Geometry::ExtendConvexHull2D::Edge Generate_1(::UnityEngine::Vector2 start)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY___DETAILS_OF_EXTENDCONVEXHULL2D_ELLIPSEARCEDGEMETADATA_GENERATE_1_OFFSET))(this, start);
		}
		*/
	};
}
