#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusItem.h"

#define NPCCROWD_AI_TRIGGEREVENTSTIMULUSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xD924FF0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TriggerEventStimulusItem_TypeDefinitionIndex = 42190;

	class TriggerEventStimulusItem : public ::NPCCrowd::AI::EventStimulusItem
	{
	public:
		::System::Boolean triggerIn; // 0x18
		::System::Single range; // 0x1C
		::System::Single height; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TRIGGEREVENTSTIMULUSITEM__CTOR_OFFSET))(this);
		}
	};
}
