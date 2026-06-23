#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusItem.h"

#define NPCCROWD_AI_TICKEVENTSTIMULUSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFF823F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int TickEventStimulusItem_TypeDefinitionIndex = 40917;

	class TickEventStimulusItem : public ::NPCCrowd::AI::EventStimulusItem
	{
	public:
		::System::Single tickInterval; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_TICKEVENTSTIMULUSITEM__CTOR_OFFSET))(this);
		}
	};
}
