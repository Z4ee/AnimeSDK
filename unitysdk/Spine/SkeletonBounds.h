#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class BoundingBoxAttachment; }
namespace Spine { class Polygon; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SKELETONBOUNDS_AABBCOMPUTE_OFFSET UNITYSDK_OFFSET(0x1D9568F0)
#define SPINE_SKELETONBOUNDS_AABBCONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1D956A60)
#define SPINE_SKELETONBOUNDS_AABBINTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x1D956A90)
#define SPINE_SKELETONBOUNDS_AABBINTERSECTSSKELETON_OFFSET UNITYSDK_OFFSET(0x1D956B70)
#define SPINE_SKELETONBOUNDS_CONTAINSPOINT_1_OFFSET UNITYSDK_OFFSET(0x1D956CF0)
#define SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET UNITYSDK_OFFSET(0x1D956BC0)
#define SPINE_SKELETONBOUNDS_GETPOLYGON_OFFSET UNITYSDK_OFFSET(0x1D957190)
#define SPINE_SKELETONBOUNDS_GET_BOUNDINGBOXES_OFFSET UNITYSDK_OFFSET(0x1D9563E0)
#define SPINE_SKELETONBOUNDS_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1D9564B0)
#define SPINE_SKELETONBOUNDS_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x1D956460)
#define SPINE_SKELETONBOUNDS_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x1D956480)
#define SPINE_SKELETONBOUNDS_GET_MINX_OFFSET UNITYSDK_OFFSET(0x1D956420)
#define SPINE_SKELETONBOUNDS_GET_MINY_OFFSET UNITYSDK_OFFSET(0x1D956440)
#define SPINE_SKELETONBOUNDS_GET_POLYGONS_OFFSET UNITYSDK_OFFSET(0x1D956400)
#define SPINE_SKELETONBOUNDS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1D9564A0)
#define SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1D956EF0)
#define SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET UNITYSDK_OFFSET(0x1D956DE0)
#define SPINE_SKELETONBOUNDS_SET_BOUNDINGBOXES_OFFSET UNITYSDK_OFFSET(0x1D9563F0)
#define SPINE_SKELETONBOUNDS_SET_MAXX_OFFSET UNITYSDK_OFFSET(0x1D956470)
#define SPINE_SKELETONBOUNDS_SET_MAXY_OFFSET UNITYSDK_OFFSET(0x1D956490)
#define SPINE_SKELETONBOUNDS_SET_MINX_OFFSET UNITYSDK_OFFSET(0x1D956430)
#define SPINE_SKELETONBOUNDS_SET_MINY_OFFSET UNITYSDK_OFFSET(0x1D956450)
#define SPINE_SKELETONBOUNDS_SET_POLYGONS_OFFSET UNITYSDK_OFFSET(0x1D956410)
#define SPINE_SKELETONBOUNDS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D956560)
#define SPINE_SKELETONBOUNDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9564C0)

namespace Spine
{
	inline static constexpr unsigned int SkeletonBounds_TypeDefinitionIndex = 32894;

	class SkeletonBounds : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::Polygon*>* _Polygons_k__BackingField; // 0x10
		::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>* _BoundingBoxes_k__BackingField; // 0x18
		::Spine::ExposedList_1<::Spine::Polygon*>* polygonPool; // 0x20
		::System::Single maxX; // 0x28
		::System::Single maxY; // 0x2C
		::System::Single minX; // 0x30
		::System::Single minY; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS__CTOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>* get_BoundingBoxes()
		{
			return ((::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_BOUNDINGBOXES_OFFSET))(this);
		}

		::System::Void set_BoundingBoxes(::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::BoundingBoxAttachment*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_BOUNDINGBOXES_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::Spine::Polygon*>* get_Polygons()
		{
			return ((::Spine::ExposedList_1<::Spine::Polygon*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_POLYGONS_OFFSET))(this);
		}

		::System::Void set_Polygons(::Spine::ExposedList_1<::Spine::Polygon*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::ExposedList_1<::Spine::Polygon*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_POLYGONS_OFFSET))(this, value);
		}

		::System::Single get_MinX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MINX_OFFSET))(this);
		}

		::System::Void set_MinX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MINX_OFFSET))(this, value);
		}

		::System::Single get_MinY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MINY_OFFSET))(this);
		}

		::System::Void set_MinY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MINY_OFFSET))(this, value);
		}

		::System::Single get_MaxX()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MAXX_OFFSET))(this);
		}

		::System::Void set_MaxX(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MAXX_OFFSET))(this, value);
		}

		::System::Single get_MaxY()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_MAXY_OFFSET))(this);
		}

		::System::Void set_MaxY(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_SET_MAXY_OFFSET))(this, value);
		}

		::System::Single get_Width()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_WIDTH_OFFSET))(this);
		}

		::System::Single get_Height()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GET_HEIGHT_OFFSET))(this);
		}

		::System::Void Update(::Spine::Skeleton* skeleton, ::System::Boolean updateAabb)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_UPDATE_OFFSET))(this, skeleton, updateAabb);
		}

		::System::Void AabbCompute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBCOMPUTE_OFFSET))(this);
		}

		::System::Boolean AabbContainsPoint(::System::Single x, ::System::Single y)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBCONTAINSPOINT_OFFSET))(this, x, y);
		}

		::System::Boolean AabbIntersectsSegment(::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBINTERSECTSSEGMENT_OFFSET))(this, x1, y1, x2, y2);
		}

		::System::Boolean AabbIntersectsSkeleton(::Spine::SkeletonBounds* bounds)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::SkeletonBounds*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_AABBINTERSECTSSKELETON_OFFSET))(this, bounds);
		}

		::System::Boolean ContainsPoint(::Spine::Polygon* polygon, ::System::Single x, ::System::Single y)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Polygon*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_CONTAINSPOINT_OFFSET))(this, polygon, x, y);
		}

		::Spine::BoundingBoxAttachment* ContainsPoint_1(::System::Single x, ::System::Single y)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_CONTAINSPOINT_1_OFFSET))(this, x, y);
		}

		::Spine::BoundingBoxAttachment* IntersectsSegment(::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2)
		{
			return ((::Spine::BoundingBoxAttachment*(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_OFFSET))(this, x1, y1, x2, y2);
		}

		::System::Boolean IntersectsSegment_1(::Spine::Polygon* polygon, ::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Spine::Polygon*, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_INTERSECTSSEGMENT_1_OFFSET))(this, polygon, x1, y1, x2, y2);
		}

		::Spine::Polygon* GetPolygon(::Spine::BoundingBoxAttachment* attachment)
		{
			return ((::Spine::Polygon*(*)(::PVOID, ::Spine::BoundingBoxAttachment*))((::PBYTE)hIl2Cpp + SPINE_SKELETONBOUNDS_GETPOLYGON_OFFSET))(this, attachment);
		}
	};
}
