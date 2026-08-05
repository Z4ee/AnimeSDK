#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnPointConfig_SpawnStyle.h"

#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x13DE40B0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointConfig_TypeDefinitionIndex = 41453;

	class PathGraphSpawnPointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::System::Int32 nearestSplineLaneIndex; // 0x48
		::System::Single spawnInterval; // 0x4C
		::System::Single spawnVarious; // 0x50
		::System::Boolean spawnDistanceLimit; // 0x54
		::System::Single minSpawnDistance; // 0x58
		::System::Single maxSpawnDistance; // 0x5C
		::System::Boolean spawnCountLimit; // 0x60
		::System::Int32 maxSpawnCount; // 0x64
		::System::Boolean cameraFrustumLimit; // 0x68
		::NPCCrowd::AI::PathGraphSpawnPointConfig_SpawnStyle spawnStyle; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
