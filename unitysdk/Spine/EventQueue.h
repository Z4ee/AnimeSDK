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

#define SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5E1F10)
#define SPINE_EVENTQUEUE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E5E25B0)
#define SPINE_EVENTQUEUE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x1E5E2240)
#define SPINE_EVENTQUEUE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E5E2200)
#define SPINE_EVENTQUEUE_DRAIN_OFFSET UNITYSDK_OFFSET(0x1E5E22C0)
#define SPINE_EVENTQUEUE_END_OFFSET UNITYSDK_OFFSET(0x1E5E21A0)
#define SPINE_EVENTQUEUE_EVENT_OFFSET UNITYSDK_OFFSET(0x1E5E2280)
#define SPINE_EVENTQUEUE_INTERRUPT_OFFSET UNITYSDK_OFFSET(0x1E5E2160)
#define SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET UNITYSDK_OFFSET(0x1E5E1F90)
#define SPINE_EVENTQUEUE_START_OFFSET UNITYSDK_OFFSET(0x1E5E2100)
#define SPINE_EVENTQUEUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E2010)

namespace Spine
{
	inline static constexpr unsigned int EventQueue_TypeDefinitionIndex = 32837;

	class EventQueue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::Spine::EventQueue_EventQueueEntry>* eventQueueEntries; // 0x10
		::System::Action* AnimationsChanged; // 0x18
		::Spine::AnimationState* state; // 0x20
		::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool; // 0x28
		::System::Boolean drainDisabled; // 0x30

		::System::Void _ctor(::Spine::AnimationState* state, ::System::Action* HandleAnimationsChanged, ::Spine::Pool_1<::Spine::TrackEntry*>* trackEntryPool)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AnimationState*, ::System::Action*, ::Spine::Pool_1<::Spine::TrackEntry*>*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE__CTOR_OFFSET))(this, state, HandleAnimationsChanged, trackEntryPool);
		}

		::System::Void add_AnimationsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_ADD_ANIMATIONSCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_AnimationsChanged(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_REMOVE_ANIMATIONSCHANGED_OFFSET))(this, value);
		}

		::System::Void Start(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_START_OFFSET))(this, entry);
		}

		::System::Void Interrupt(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_INTERRUPT_OFFSET))(this, entry);
		}

		::System::Void End(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_END_OFFSET))(this, entry);
		}

		::System::Void Dispose(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_DISPOSE_OFFSET))(this, entry);
		}

		::System::Void Complete(::Spine::TrackEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_COMPLETE_OFFSET))(this, entry);
		}

		::System::Void Event(::Spine::TrackEntry* entry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_EVENT_OFFSET))(this, entry, e);
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
