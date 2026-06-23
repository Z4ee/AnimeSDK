#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_AI_AIACTIONPLAYSOUNDACTIONCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x6C59B0)
#define NPCCROWD_AI_AIACTIONPLAYSOUNDACTIONCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x6C5A00)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionPlaySoundActionConfig_TypeDefinitionIndex = 67766;

	struct alignas(8) AIActionPlaySoundActionConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::String* triggerEvent; // 0x18
		::System::String* soundActionKey; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYSOUNDACTIONCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPLAYSOUNDACTIONCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
