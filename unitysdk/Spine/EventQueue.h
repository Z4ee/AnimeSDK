#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/EventQueue_EventQueueEntry.h"
#include "unitysdk/System/Object.h"

namespace Spine { class AnimationState; }
namespace Spine { class Event; }
namespace Spine { class TrackEntry; }
namespace Spine { template <typename T> class Pool_1; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5DB490)
#define SPINE_EVENTQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E5D22F0)
#define SPINE_EVENTQUEUE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5D03B0)
#define SPINE_EVENTQUEUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5D1A70)
#define SPINE_EVENTQUEUE_DRAIN_OFFSET UNITYSDK_OFFSET(0x1E5CD1D0)
#define SPINE_EVENTQUEUE_END_OFFSET UNITYSDK_OFFSET(0x1E5CCEB0)
#define SPINE_EVENTQUEUE_EVENT_OFFSET UNITYSDK_OFFSET(0x1E5D0330)
#define SPINE_EVENTQUEUE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E5D0960)
#define SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5DB4F0)
#define SPINE_EVENTQUEUE_START_OFFSET UNITYSDK_OFFSET(0x1E5D09E0)
#define SPINE_EVENTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CC550)

namespace Spine
{
	inline static constexpr unsigned int EventQueue_TypeDefinitionIndex = 38335;

	class EventQueue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Spine::EventQueue_EventQueueEntry>* eventQueueEntries; // 0x10
		::Spine::AnimationState* state; // 0x18
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x20
		::System::Action* AnimationsChanged; // 0x28
		::System::Boolean drainDisabled; // 0x30

		::System::Void _ctor(::Spine::AnimationState* a1, ::System::Action* a2, ::Spine::Pool_1<::Spine::TrackEntry*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::Action*, ::Spine::Pool_1<::Spine::TrackEntry*>*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void add_AnimationsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_AnimationsChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET))(this, a1);
		}

		::System::Void Start(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_START_OFFSET))(this, a1);
		}

		::System::Void Interrupt(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_INTERRUPT_OFFSET))(this, a1);
		}

		::System::Void End(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_END_OFFSET))(this, a1);
		}

		::System::Void Dispose(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void Complete(::Spine::TrackEntry* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_COMPLETE_OFFSET))(this, a1);
		}

		::System::Void Event(::Spine::TrackEntry* a1, ::Spine::Event* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_EVENT_OFFSET))(this, a1, a2);
		}

		::System::Void Drain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DRAIN_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_CLEAR_OFFSET))(this);
		}
	};
}
