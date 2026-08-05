#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_AI_AIACTIONRANDOMCHATCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x7B1E40)
#define NPCCROWD_AI_AIACTIONRANDOMCHATCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x7B1E90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionRandomChatConfig_TypeDefinitionIndex = 59167;

	struct alignas(8) AIActionRandomChatConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::Il2CppArray<::System::String*>* textKeys; // 0x18
		::System::Single duration; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRANDOMCHATCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONRANDOMCHATCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
