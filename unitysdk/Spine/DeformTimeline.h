#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class VertexAttachment; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_DEFORMTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1E5D9E50)
#define SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET UNITYSDK_OFFSET(0x1E5D9C20)
#define SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1E5D98E0)
#define SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1E5D98D0)
#define SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1E5D98F0)
#define SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1E5D99A0)
#define SPINE_DEFORMTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1E5D9900)
#define SPINE_DEFORMTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D96C0)

namespace Spine
{
	inline static constexpr unsigned int DeformTimeline_TypeDefinitionIndex = 38322;

	class DeformTimeline : public ::Spine::CurveTimeline
	{
	public:
		::Il2CppArray<::Il2CppArray<::System::Single>*>* vertices; // 0x28
		::Spine::VertexAttachment* attachment; // 0x30
		::System::Int32 slotIndex; // 0x38

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::Spine::VertexAttachment* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Spine::VertexAttachment* get_Attachment()
		{
			return ((::Spine::VertexAttachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::Single>*>* get_Vertices()
		{
			return ((::Il2CppArray<::Il2CppArray<::System::Single>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::Il2CppArray<::System::Single>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void setBezier(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::Single a8, ::System::Single a9, ::System::Single a10, ::System::Single a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Single GetCurvePercent(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET))(this, a1, a2);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
