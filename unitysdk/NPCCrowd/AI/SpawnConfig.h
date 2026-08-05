#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/SpawnCheckType.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_AI_SPAWNCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x651930)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int SpawnConfig_TypeDefinitionIndex = 71820;

	struct alignas(4) SpawnConfig
	{
		::System::Single spawnInterval; // 0x10
		::System::Single spawnVarious; // 0x14
		::NPCCrowd::AI::SpawnCheckType spawnCheckType; // 0x18
		::System::Single checkRadius; // 0x1C
		::System::Single weight; // 0x20
		::System::Boolean isGlobalPercentWeight; // 0x24
		::System::Single populationWeight; // 0x28
		::System::Single nodeLoadMaxFactor; // 0x2C
		::System::Boolean ignoreInnerRange; // 0x30
		::System::Boolean isWandering; // 0x31

		::System::Void _ctor(::System::Boolean initDefault)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_AI_SPAWNCONFIG__CTOR_OFFSET))(this, initDefault);
		}
	};
}
