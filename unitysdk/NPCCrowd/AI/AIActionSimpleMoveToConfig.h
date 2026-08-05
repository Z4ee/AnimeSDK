#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/BaseActionConfig.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define NPCCROWD_AI_AIACTIONSIMPLEMOVETOCONFIG_GETBASEACTIONCONFIG_OFFSET UNITYSDK_OFFSET(0x462FC0)
#define NPCCROWD_AI_AIACTIONSIMPLEMOVETOCONFIG_ISMULTITHREAD_OFFSET UNITYSDK_OFFSET(0x463010)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionSimpleMoveToConfig_TypeDefinitionIndex = 61639;

	struct alignas(8) AIActionSimpleMoveToConfig
	{
		::NPCCrowd::AI::BaseActionConfig baseConfig; // 0x10
		::System::Boolean isWorldAxis; // 0x18
		::UnityEngine::Vector2 targetPosXRange; // 0x1C
		::UnityEngine::Vector2 targetPosYRange; // 0x24
		::UnityEngine::Vector2 targetPosZRange; // 0x2C
		::System::Single moveSpeed; // 0x34

		::NPCCrowd::AI::BaseActionConfig GetBaseActionConfig()
		{
			return ((::NPCCrowd::AI::BaseActionConfig(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONSIMPLEMOVETOCONFIG_GETBASEACTIONCONFIG_OFFSET))(this);
		}

		::System::Boolean IsMultiThread()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONSIMPLEMOVETOCONFIG_ISMULTITHREAD_OFFSET))(this);
		}
	};
}
