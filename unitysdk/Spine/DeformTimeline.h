#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/CurveTimeline.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class VertexAttachment; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_DEFORMTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x1C433110)
#define SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET UNITYSDK_OFFSET(0x1C432E10)
#define SPINE_DEFORMTIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1C432B00)
#define SPINE_DEFORMTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1C432AF0)
#define SPINE_DEFORMTIMELINE_GET_VERTICES_OFFSET UNITYSDK_OFFSET(0x1C432B10)
#define SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1C432BE0)
#define SPINE_DEFORMTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x1C432B20)
#define SPINE_DEFORMTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C432750)

namespace Spine
{
	inline static constexpr unsigned int DeformTimeline_TypeDefinitionIndex = 31273;

	class DeformTimeline : public ::Spine::CurveTimeline
	{
	public:
		::Spine::VertexAttachment* attachment; // 0x28
		::Il2CppArray<::Il2CppArray<::System::Single>*>* vertices; // 0x30
		::System::Int32 slotIndex; // 0x38

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 bezierCount, ::System::Int32 slotIndex, ::Spine::VertexAttachment* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::Spine::VertexAttachment*))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE__CTOR_OFFSET))(this, frameCount, bezierCount, slotIndex, attachment);
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

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::Il2CppArray<::System::Single>* vertices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETFRAME_OFFSET))(this, frame, time, vertices);
		}

		::System::Void setBezier(::System::Int32 bezier, ::System::Int32 frame, ::System::Int32 value, ::System::Single time1, ::System::Single value1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single time2, ::System::Single value2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_SETBEZIER_OFFSET))(this, bezier, frame, value, time1, value1, cx1, cy1, cx2, cy2, time2, value2);
		}

		::System::Single GetCurvePercent(::System::Single time, ::System::Int32 frame)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_GETCURVEPERCENT_OFFSET))(this, time, frame);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_DEFORMTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}
	};
}
