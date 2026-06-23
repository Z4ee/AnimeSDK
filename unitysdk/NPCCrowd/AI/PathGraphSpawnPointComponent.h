#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnPointComponent_SpawnStyle.h"

#define NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD923DA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSpawnPointComponent_TypeDefinitionIndex = 39628;

	class PathGraphSpawnPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::Single spawnInterval; // 0x10
		::System::Single spawnVarious; // 0x14
		::System::Boolean spawnDistanceLimit; // 0x18
		::System::Single minSpawnDistance; // 0x1C
		::System::Single maxSpawnDistance; // 0x20
		::System::Boolean spawnCountLimit; // 0x24
		::System::Int32 maxSpawnCount; // 0x28
		::System::Boolean cameraFrustumLimit; // 0x2C
		::NPCCrowd::AI::PathGraphSpawnPointComponent_SpawnStyle spawnStyle; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPAWNPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
