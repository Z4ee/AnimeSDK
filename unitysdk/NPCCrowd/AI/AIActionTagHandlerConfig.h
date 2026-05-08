#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class SerializableGameplayTagContainer; }

#define NPCCROWD_AI_AIACTIONTAGHANDLERCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x72DA30)
#define NPCCROWD_AI_AIACTIONTAGHANDLERCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x72DA80)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionTagHandlerConfig_TypeDefinitionIndex = 54381;

	struct alignas(8) AIActionTagHandlerConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::Foundation::Unreal::SerializableGameplayTagContainer* tags; // 0x18
		::System::Boolean add; // 0x20

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONTAGHANDLERCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONTAGHANDLERCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
