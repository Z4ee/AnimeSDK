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

#define SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x160514C0)
#define SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET UNITYSDK_OFFSET(0x16051460)
#define SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x16051450)
#define SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x16051750)
#define SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x16051470)
#define SPINE_ATTACHMENTTIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x16051330)

namespace Spine
{
	inline static constexpr unsigned int AttachmentTimeline_TypeDefinitionIndex = 38321;

	class AttachmentTimeline : public ::Spine::Timeline
	{
	public:
		::Il2CppArray<::System::String*>* attachmentNames; // 0x20
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_AttachmentNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_GET_ATTACHMENTNAMES_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void SetAttachment(::Spine::Skeleton* a1, ::Spine::Slot* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Slot*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENTTIMELINE_SETATTACHMENT_OFFSET))(this, a1, a2, a3);
		}
	};
}
