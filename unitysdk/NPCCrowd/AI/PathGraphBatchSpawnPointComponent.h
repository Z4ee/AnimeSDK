#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphBatchSpawnPointComponent_SpawnSlot.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x157A6F90)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphBatchSpawnPointComponent_TypeDefinitionIndex = 49388;

	class PathGraphBatchSpawnPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphBatchSpawnPointComponent_SpawnSlot>* availableSpawnSlots; // 0x10
		::System::Boolean spawnDistanceLimit; // 0x18
		::System::Single minSpawnDistance; // 0x1C
		::System::Single maxSpawnDistance; // 0x20
		::System::Boolean spawnCountLimit; // 0x24
		::System::Int32 maxSpawnCount; // 0x28
		::System::Boolean cameraFrustumLimit; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHBATCHSPAWNPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
