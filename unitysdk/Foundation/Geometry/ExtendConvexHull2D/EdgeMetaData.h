#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EdgeMetaDataStorage.h"
#include "unitysdk/Foundation/Geometry/__details_of_ExtendConvexHull2D/EdgeType.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA_GENERATE_1_OFFSET UNITYSDK_OFFSET(0xAA5B90)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA_GENERATE_OFFSET UNITYSDK_OFFSET(0xAA5B70)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1F467BD0)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0xAA5B00)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA__CTOR_2_OFFSET UNITYSDK_OFFSET(0xAA5B20)
#define FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA__CTOR_OFFSET UNITYSDK_OFFSET(0xAA59F0)

namespace Foundation::Geometry::ExtendConvexHull2D
{
	inline static constexpr unsigned int EdgeMetaData_TypeDefinitionIndex = 8831;

	struct alignas(8) EdgeMetaData
	{
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EdgeType Type; // 0x10
		::Foundation::Geometry::__details_of_ExtendConvexHull2D::EdgeMetaDataStorage _storage; // 0x18

		/*
		::System::Void _ctor(::Foundation::Geometry::ExtendConvexHull2D::Edge edge)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::ExtendConvexHull2D::Edge))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA__CTOR_OFFSET))(this, edge);
		}
		*/

		/*
		::System::Void _ctor_1(::Foundation::Geometry::__details_of_ExtendConvexHull2D::SegmentEdgeMetaData metaData)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::__details_of_ExtendConvexHull2D::SegmentEdgeMetaData))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA__CTOR_1_OFFSET))(this, metaData);
		}
		*/

		/*
		::System::Void _ctor_2(::Foundation::Geometry::__details_of_ExtendConvexHull2D::EllipseArcEdgeMetaData metaData)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Geometry::__details_of_ExtendConvexHull2D::EllipseArcEdgeMetaData))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA__CTOR_2_OFFSET))(this, metaData);
		}
		*/

		/*
		::Foundation::Geometry::ExtendConvexHull2D::Edge Generate(::UnityEngine::Vector2 start, ::UnityEngine::Vector2 end)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA_GENERATE_OFFSET))(this, start, end);
		}
		*/

		/*
		::Foundation::Geometry::ExtendConvexHull2D::Edge Generate_1(::UnityEngine::Vector2 start)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::Edge(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA_GENERATE_1_OFFSET))(this, start);
		}
		*/

		/*
		static ::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData op_Implicit(::Foundation::Geometry::ExtendConvexHull2D::Edge edge)
		{
			return ((::Foundation::Geometry::ExtendConvexHull2D::EdgeMetaData(*)(::Foundation::Geometry::ExtendConvexHull2D::Edge))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_EXTENDCONVEXHULL2D_EDGEMETADATA_OP_IMPLICIT_OFFSET))(edge);
		}
		*/
	};
}
