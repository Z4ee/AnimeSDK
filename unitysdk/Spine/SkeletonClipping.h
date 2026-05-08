#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class ClippingAttachment; }
namespace Spine { class Slot; }
namespace Spine { class Triangulator; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SKELETONCLIPPING_CLIPEND_1_OFFSET UNITYSDK_OFFSET(0x1C292CB0)
#define SPINE_SKELETONCLIPPING_CLIPEND_OFFSET UNITYSDK_OFFSET(0x1C292C80)
#define SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET UNITYSDK_OFFSET(0x1C2925F0)
#define SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1C292D70)
#define SPINE_SKELETONCLIPPING_CLIP_OFFSET UNITYSDK_OFFSET(0x1C293FE0)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1C2925C0)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET UNITYSDK_OFFSET(0x1C2925D0)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1C2925B0)
#define SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET UNITYSDK_OFFSET(0x1C2925E0)
#define SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1C292A90)
#define SPINE_SKELETONCLIPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1C295060)

namespace Spine
{
	inline static constexpr unsigned int SkeletonClipping_TypeDefinitionIndex = 31345;

	class SkeletonClipping : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Int32>* clippedTriangles; // 0x10
		::Spine::ExposedList_1<::System::Single>* clippedUVs; // 0x18
		::Spine::Triangulator* triangulator; // 0x20
		::Spine::ExposedList_1<::System::Single>* clipOutput; // 0x28
		::Spine::ExposedList_1<::System::Single>* clippedVertices; // 0x30
		::Spine::ClippingAttachment* clipAttachment; // 0x38
		::Spine::ExposedList_1<::System::Single>* clippingPolygon; // 0x40
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* clippingPolygons; // 0x48
		::Spine::ExposedList_1<::System::Single>* scratch; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING__CTOR_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Single>* get_ClippedVertices()
		{
			return ((::Spine::ExposedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Int32>* get_ClippedTriangles()
		{
			return ((::Spine::ExposedList_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::System::Single>* get_ClippedUVs()
		{
			return ((::Spine::ExposedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET))(this);
		}

		::System::Boolean get_IsClipping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET))(this);
		}

		::System::Int32 ClipStart(::Spine::Slot* slot, ::Spine::ClippingAttachment* clip)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::Slot*, ::Spine::ClippingAttachment*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET))(this, slot, clip);
		}

		::System::Void ClipEnd(::Spine::Slot* slot)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_OFFSET))(this, slot);
		}

		::System::Void ClipEnd_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_1_OFFSET))(this);
		}

		::System::Void ClipTriangles(::Il2CppArray<::System::Single>* vertices, ::System::Int32 verticesLength, ::Il2CppArray<::System::Int32>* triangles, ::System::Int32 trianglesLength, ::Il2CppArray<::System::Single>* uvs)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET))(this, vertices, verticesLength, triangles, trianglesLength, uvs);
		}

		::System::Boolean Clip(::System::Single x1, ::System::Single y1, ::System::Single x2, ::System::Single y2, ::System::Single x3, ::System::Single y3, ::Spine::ExposedList_1<::System::Single>* clippingArea, ::Spine::ExposedList_1<::System::Single>* output)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::System::Single>*, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIP_OFFSET))(this, x1, y1, x2, y2, x3, y3, clippingArea, output);
		}

		static ::System::Void MakeClockwise(::Spine::ExposedList_1<::System::Single>* polygon)
		{
			return ((::System::Void(*)(::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET))(polygon);
		}
	};
}
