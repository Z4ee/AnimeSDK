#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/EventStimulusItem.h"

#define NPCCROWD_AI_INTERACTEVENTSTIMULUSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1826B070)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int InteractEventStimulusItem_TypeDefinitionIndex = 82430;

	class InteractEventStimulusItem : public ::NPCCrowd::AI::EventStimulusItem
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_INTERACTEVENTSTIMULUSITEM__CTOR_OFFSET))(this);
		}
	};
}
