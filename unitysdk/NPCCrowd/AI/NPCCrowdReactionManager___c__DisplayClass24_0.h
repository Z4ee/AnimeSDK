#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class InteractEventStimulusItem; }

#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET UNITYSDK_OFFSET(0x10B39130)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdReactionManager___c__DisplayClass24_0_TypeDefinitionIndex = 46389;

	class NPCCrowdReactionManager___c__DisplayClass24_0 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::InteractEventStimulusItem* interactesi; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_0__CTOR_OFFSET))(this);
		}
	};
}
