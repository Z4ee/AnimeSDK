#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Polygon; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SKELETONBOUNDS_AABBCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1AC77180)
#define SPINE_SKELETONBOUNDS_AABBCONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1AC772E0)
#define SPINE_SKELETONBOUNDS_AABBINTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x1AC77310)
#define SPINE_SKELETONBOUNDS_AABBINTERSECTSSKELETON_OFFSET UNITYSDK_OFFSET(0x1AC773F0)
#define SPINE_SKELETONBOUNDS_CONTAINSPOINT_1_OFFSET UNITYSDK_OFFSET(0x1AC77540)
#define SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1AC77440)
#define SPINE_SKELETONBOUNDS_GETPOLYGON_OFFSET UNITYSDK_OFFSET(0x1AC77960)
#define SPINE_SKELETONBOUNDS_GET_BOUNDINGBOXES_OFFSET UNITYSDK_OFFSET(0x1AC76CC0)
#define SPINE_SKELETONBOUNDS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AC76D90)
#define SPINE_SKELETONBOUNDS_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x1AC76D40)
#define SPINE_SKELETONBOUNDS_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x1AC76D60)
#define SPINE_SKELETONBOUNDS_GET_MINX_OFFSET UNITYSDK_OFFSET(0x1AC76D00)
#define SPINE_SKELETONBOUNDS_GET_MINY_OFFSET UNITYSDK_OFFSET(0x1AC76D20)
#define SPINE_SKELETONBOUNDS_GET_POLYGONS_OFFSET UNITYSDK_OFFSET(0x1AC76CE0)
#define SPINE_SKELETONBOUNDS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AC76D80)
#define SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1AC77700)
#define SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x1AC77600)
#define SPINE_SKELETONBOUNDS_SET_BOUNDINGBOXES_OFFSET UNITYSDK_OFFSET(0x1AC76CD0)
#define SPINE_SKELETONBOUNDS_SET_MAXX_OFFSET UNITYSDK_OFFSET(0x1AC76D50)
#define SPINE_SKELETONBOUNDS_SET_MAXY_OFFSET UNITYSDK_OFFSET(0x1AC76D70)
#define SPINE_SKELETONBOUNDS_SET_MINX_OFFSET UNITYSDK_OFFSET(0x1AC76D10)
#define SPINE_SKELETONBOUNDS_SET_MINY_OFFSET UNITYSDK_OFFSET(0x1AC76D30)
#define SPINE_SKELETONBOUNDS_SET_POLYGONS_OFFSET UNITYSDK_OFFSET(0x1AC76CF0)
#define SPINE_SKELETONBOUNDS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1AC76E40)
#define SPINE_SKELETONBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC76DA0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBounds_TypeDefinitionIndex = 36751;

	class SkeletonBounds : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Polygon*>* polygonPool; // 0x10
		::Spine::ExposedList_1<::Spine::Polygon*>* _Polygons_k__BackingField; // 0x18
		::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>* _BoundingBoxes_k__BackingField; // 0x20
		::System::Single maxX; // 0x28
		::System::Single maxY; // 0x2C
		::System::Single minY; // 0x30
		::System::Single minX; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS__CTOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>* get_BoundingBoxes()
		{
			return ((::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_BOUNDINGBOXES_OFFSET))(this);
		}

		::System::Void set_BoundingBoxes(::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_BOUNDINGBOXES_OFFSET))(this, a1);
		}

		::Spine::ExposedList_1<::Spine::Polygon*>* get_Polygons()
		{
			return ((::Spine::ExposedList_1<::Spine::Polygon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_POLYGONS_OFFSET))(this);
		}

		::System::Void set_Polygons(::Spine::ExposedList_1<::Spine::Polygon*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Polygon*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_POLYGONS_OFFSET))(this, a1);
		}

		::System::Single get_MinX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MINX_OFFSET))(this);
		}

		::System::Void set_MinX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MINX_OFFSET))(this, a1);
		}

		::System::Single get_MinY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MINY_OFFSET))(this);
		}

		::System::Void set_MinY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MINY_OFFSET))(this, a1);
		}

		::System::Single get_MaxX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MAXX_OFFSET))(this);
		}

		::System::Void set_MaxX(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MAXX_OFFSET))(this, a1);
		}

		::System::Single get_MaxY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MAXY_OFFSET))(this);
		}

		::System::Void set_MaxY(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MAXY_OFFSET))(this, a1);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_WIDTH_OFFSET))(this);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void Update(::Spine::Skeleton* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_UPDATE_OFFSET))(this, a1, a2);
		}

		::System::Void AabbCompute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBCOMPUTE_OFFSET))(this);
		}

		::System::Boolean AabbContainsPoint(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBCONTAINSPOINT_OFFSET))(this, a1, a2);
		}

		::System::Boolean AabbIntersectsSegment(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBINTERSECTSSEGMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean AabbIntersectsSkeleton(::Spine::SkeletonBounds* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::SkeletonBounds*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBINTERSECTSSKELETON_OFFSET))(this, a1);
		}

		::System::Boolean ContainsPoint(::Spine::Polygon* a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Polygon*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET))(this, a1, a2, a3);
		}

		::Spine::BoundingBoxAttachment* ContainsPoint_1(::System::Single a1, ::System::Single a2)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_CONTAINSPOINT_1_OFFSET))(this, a1, a2);
		}

		::Spine::BoundingBoxAttachment* IntersectsSegment(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean IntersectsSegment_1(::Spine::Polygon* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Polygon*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_1_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Spine::Polygon* GetPolygon(::Spine::BoundingBoxAttachment* a1)
		{
			return ((::Spine::Polygon*(*)(::PVOID, ::Spine::BoundingBoxAttachment*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GETPOLYGON_OFFSET))(this, a1);
		}
	};
}
