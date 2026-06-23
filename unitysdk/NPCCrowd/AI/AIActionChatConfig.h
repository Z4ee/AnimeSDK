#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_AI_AIACTIONCHATCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x693CD0)
#define NPCCROWD_AI_AIACTIONCHATCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x693D20)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionChatConfig_TypeDefinitionIndex = 85317;

	struct alignas(8) AIActionChatConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::String* textKey; // 0x18
		::System::Single duration; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONCHATCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONCHATCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
