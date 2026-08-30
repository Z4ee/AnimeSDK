#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/MixBlend.h"
#include "unitysdk/Spine/MixDirection.h"
#include "unitysdk/Spine/SequenceMode.h"
#include "unitysdk/Spine/Timeline.h"

namespace Spine { class Attachment; }
namespace Spine { class Event; }
namespace Spine { class IHasTextureRegion; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SEQUENCETIMELINE_APPLY_OFFSET UNITYSDK_OFFSET(0x160631B0)
#define SPINE_SEQUENCETIMELINE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x160630D0)
#define SPINE_SEQUENCETIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x160630B0)
#define SPINE_SEQUENCETIMELINE_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x160630C0)
#define SPINE_SEQUENCETIMELINE_SETFRAME_OFFSET UNITYSDK_OFFSET(0x16063140)
#define SPINE_SEQUENCETIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x16062D70)

namespace Spine
{
	inline static constexpr unsigned int SequenceTimeline_TypeDefinitionIndex = 38330;

	class SequenceTimeline : public ::Spine::Timeline
	{
	public:
		// static const ::System::Int32 ENTRIES = 0x3; // 0x0
		// static const ::System::Int32 MODE = 0x1; // 0x0
		// static const ::System::Int32 DELAY = 0x2; // 0x0
		::Spine::IHasTextureRegion* attachment; // 0x20
		::System::Int32 slotIndex; // 0x28

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::Spine::Attachment* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_SlotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_SLOTINDEX_OFFSET))(this);
		}

		::Spine::Attachment* get_Attachment()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void SetFrame(::System::Int32 a1, ::System::Single a2, ::Spine::SequenceMode a3, ::System::Int32 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::Spine::SequenceMode, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_SETFRAME_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Apply(::Spine::Skeleton* a1, ::System::Single a2, ::System::Single a3, ::Spine::ExposedList_1<::Spine::Event*>* a4, ::System::Single a5, ::Spine::MixBlend a6, ::Spine::MixDirection a7)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::System::Single, ::System::Single, ::Spine::ExposedList_1<::Spine::Event*>*, ::System::Single, ::Spine::MixBlend, ::Spine::MixDirection))((::PBYTE)hIl2Cpp + SPINE_SEQUENCETIMELINE_APPLY_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
	};
}
