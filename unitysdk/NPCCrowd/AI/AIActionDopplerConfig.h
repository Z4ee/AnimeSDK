#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define NPCCROWD_AI_AIACTIONDOPPLERCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x651580)
#define NPCCROWD_AI_AIACTIONDOPPLERCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x6515D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionDopplerConfig_TypeDefinitionIndex = 82981;

	struct alignas(8) AIActionDopplerConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::String* dopplerRTPCName; // 0x18
		::System::Single dopplerScale; // 0x20
		::System::Single maxDopplerVelocity; // 0x24

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONDOPPLERCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONDOPPLERCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
