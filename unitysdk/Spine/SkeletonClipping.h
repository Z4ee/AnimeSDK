#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class ClippingAttachment; }
namespace Spine { class Slot; }
namespace Spine { class Triangulator; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SKELETONCLIPPING_CLIPEND_1_OFFSET UNITYSDK_OFFSET(0x1AC77FB0)
#define SPINE_SKELETONCLIPPING_CLIPEND_OFFSET UNITYSDK_OFFSET(0x1AC77F80)
#define SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET UNITYSDK_OFFSET(0x1AC77A80)
#define SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1AC78070)
#define SPINE_SKELETONCLIPPING_CLIP_OFFSET UNITYSDK_OFFSET(0x1AC79060)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDTRIANGLES_OFFSET UNITYSDK_OFFSET(0x1AC77A50)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDUVS_OFFSET UNITYSDK_OFFSET(0x1AC77A60)
#define SPINE_SKELETONCLIPPING_GET_CLIPPEDVERTICES_OFFSET UNITYSDK_OFFSET(0x1AC77A40)
#define SPINE_SKELETONCLIPPING_GET_ISCLIPPING_OFFSET UNITYSDK_OFFSET(0x1AC77A70)
#define SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1AC77E20)
#define SPINE_SKELETONCLIPPING__CTOR_OFFSET UNITYSDK_OFFSET(0x1AC79F00)

namespace Spine
{
	inline static constexpr unsigned int SkeletonClipping_TypeDefinitionIndex = 36753;

	class SkeletonClipping : public ::System::Object
	{
	public:
		::Spine::ClippingAttachment* clipAttachment; // 0x10
		::Spine::ExposedList_1<::System::Single>* clippedUVs; // 0x18
		::Spine::Triangulator* triangulator; // 0x20
		::Spine::ExposedList_1<::Spine::ExposedList_1<::System::Single>*>* clippingPolygons; // 0x28
		::Spine::ExposedList_1<::System::Int32>* clippedTriangles; // 0x30
		::Spine::ExposedList_1<::System::Single>* clippingPolygon; // 0x38
		::Spine::ExposedList_1<::System::Single>* clippedVertices; // 0x40
		::Spine::ExposedList_1<::System::Single>* clipOutput; // 0x48
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

		::System::Int32 ClipStart(::Spine::Slot* a1, ::Spine::ClippingAttachment* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::Slot*, ::Spine::ClippingAttachment*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPSTART_OFFSET))(this, a1, a2);
		}

		::System::Void ClipEnd(::Spine::Slot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_OFFSET))(this, a1);
		}

		::System::Void ClipEnd_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPEND_1_OFFSET))(this);
		}

		::System::Void ClipTriangles(::Il2CppArray<::System::Single>* a1, ::System::Int32 a2, ::Il2CppArray<::System::Int32>* a3, ::System::Int32 a4, ::Il2CppArray<::System::Single>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Single>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIPTRIANGLES_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean Clip(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::Spine::ExposedList_1<::System::Single>* a7, ::Spine::ExposedList_1<::System::Single>* a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::System::Single>*, ::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_CLIP_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void MakeClockwise(::Spine::ExposedList_1<::System::Single>* a1)
		{
			return ((::System::Void(*)(::Spine::ExposedList_1<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONCLIPPING_MAKECLOCKWISE_OFFSET))(a1);
		}
	};
}
