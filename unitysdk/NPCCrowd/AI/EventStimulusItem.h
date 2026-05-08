#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_AI_EVENTSTIMULUSITEM__CTOR_OFFSET UNITYSDK_OFFSET(0xFB4BCB0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EventStimulusItem_TypeDefinitionIndex = 78210;

	class EventStimulusItem : public ::System::Object
	{
	public:
		::System::UInt32 stimulusID; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_EVENTSTIMULUSITEM__CTOR_OFFSET))(this);
		}
	};
}
