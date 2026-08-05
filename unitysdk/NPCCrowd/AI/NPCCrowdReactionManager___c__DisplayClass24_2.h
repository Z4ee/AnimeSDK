#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class TriggerEventStimulusItem; }

#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_2__CTOR_OFFSET UNITYSDK_OFFSET(0x114D5C00)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdReactionManager___c__DisplayClass24_2_TypeDefinitionIndex = 46390;

	class NPCCrowdReactionManager___c__DisplayClass24_2 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::TriggerEventStimulusItem* triggeresi; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_2__CTOR_OFFSET))(this);
		}
	};
}
