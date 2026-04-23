#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/EventQueue_EventType.h"
#include "unitysdk/System/ValueType.h"

namespace Spine { class Event; }
namespace Spine { class TrackEntry; }

#define SPINE_EVENTQUEUE_EVENTQUEUEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x22B0950)

namespace Spine
{
	inline static constexpr unsigned int EventQueue_EventQueueEntry_TypeDefinitionIndex = 36395;

	struct alignas(8) EventQueue_EventQueueEntry
	{
		::Spine::EventQueue_EventType type; // 0x10
		::Spine::TrackEntry* entry; // 0x18
		::Spine::Event* e; // 0x20

		::System::Void _ctor(::Spine::EventQueue_EventType eventType, ::Spine::TrackEntry* trackEntry, ::Spine::Event* e)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::EventQueue_EventType, ::Spine::TrackEntry*, ::Spine::Event*))((::PBYTE)hIl2Cpp + SPINE_EVENTQUEUE_EVENTQUEUEENTRY__CTOR_OFFSET))(this, eventType, trackEntry, e);
		}
	};
}
