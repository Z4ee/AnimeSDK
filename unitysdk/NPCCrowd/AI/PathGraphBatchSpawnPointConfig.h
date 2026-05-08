#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphBatchSpawnPointConfig_SpawnSlot.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xF3E4000)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointConfig_TypeDefinitionIndex = 81146;

	class PathGraphBatchSpawnPointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphBatchSpawnPointConfig_SpawnSlot>* availableSpawnSlots; // 0x48
		::System::Boolean spawnDistanceLimit; // 0x50
		::System::Single minSpawnDistance; // 0x54
		::System::Single maxSpawnDistance; // 0x58
		::System::Boolean spawnCountLimit; // 0x5C
		::System::Int32 maxSpawnCount; // 0x60
		::System::Boolean cameraFrustumLimit; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
