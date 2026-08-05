#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace NPCCrowd::AI { class NPCCrowdReactionManager___c__DisplayClass24_0; }

#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_1__CTOR_OFFSET UNITYSDK_OFFSET(0xE556380)
#define NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_1__HANDLEEVENTCONFIGSTIMULUSENABLE_B__0_OFFSET UNITYSDK_OFFSET(0xE556390)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCCrowdReactionManager___c__DisplayClass24_1_TypeDefinitionIndex = 46387;

	class NPCCrowdReactionManager___c__DisplayClass24_1 : public ::System::Object
	{
	public:
		::NPCCrowd::AI::NPCCrowdReactionManager___c__DisplayClass24_0* CS___8__locals1; // 0x10
		::MoleMole::Battle::Entity* owner; // 0x18
		::System::UInt32 ownerId; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_1__CTOR_OFFSET))(this);
		}

		::System::Void _HandleEventConfigStimulusEnable_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCCROWDREACTIONMANAGER___C__DISPLAYCLASS24_1__HANDLEEVENTCONFIGSTIMULUSENABLE_B__0_OFFSET))(this);
		}
	};
}
