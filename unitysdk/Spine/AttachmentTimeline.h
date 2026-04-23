#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Event; }
namespace Spine { class Skeleton; }
namespace Spine { class Slot; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }

#define SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x19DD3A40)
#define SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET UNITYSDK_OFFSET(0x19DD39D0)
#define SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x19DD39C0)
#define SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x19DD3CE0)
#define SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x19DD39E0)
#define SPINE_ATTACHMENTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x19DD38F0)

namespace Spine
{
	inline static constexpr unsigned int AttachmentTimeline_TypeDefinitionIndex = 36380;

	class AttachmentTimeline : public ::Spine::Timeline
	{
	public:
		::Il2CppArray<::System::String*>* attachmentNames; // 0x20
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 frameCount, ::System::Int32 slotIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE__CTOR_OFFSET))(this, frameCount, slotIndex);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AttachmentNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 frame, ::System::Single time, ::System::String* attachmentName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET))(this, frame, time, attachmentName);
		}

		::System::Void Apply(::Spine::Skeleton* skeleton, ::System::Single lastTime, ::System::Single time, ::Spine::ExposedList_1<::Spine::Event*>* firedEvents, ::System::Single alpha, ::Spine::MixBlend blend, ::Spine::MixDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET))(this, skeleton, lastTime, time, firedEvents, alpha, blend, direction);
		}

		::System::Void SetAttachment(::Spine::Skeleton* skeleton, ::Spine::Slot* slot, ::System::String* attachmentName)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Slot*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET))(this, skeleton, slot, attachmentName);
		}
	};
}
