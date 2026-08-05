#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/NPCCrowd/AI/EAIActionTagHandlerSource.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Unreal { class SerializableGameplayTagContainer; }

#define NPCCROWD_AI_AIACTIONTAGHANDLERCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x632780)
#define NPCCROWD_AI_AIACTIONTAGHANDLERCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x6327D0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionTagHandlerConfig_TypeDefinitionIndex = 67522;

	struct alignas(8) AIActionTagHandlerConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::Foundation::Unreal::SerializableGameplayTagContainer* tags; // 0x18
		::System::Boolean useRuntimeTagContainer; // 0x20
		::Foundation::Unreal::FGameplayTagContainer runtimeTagContainer; // 0x28
		::NPCCrowd::AI::EAIActionTagHandlerSource runtimeSource; // 0x98
		::System::Boolean add; // 0x99

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
