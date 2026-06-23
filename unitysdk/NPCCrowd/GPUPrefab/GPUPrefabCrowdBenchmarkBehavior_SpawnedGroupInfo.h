#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::GPUPrefab { class MonoNPCCrowdGPUGroupController; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_SPAWNEDGROUPINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x12746750)

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int GPUPrefabCrowdBenchmarkBehavior_SpawnedGroupInfo_TypeDefinitionIndex = 42789;

	class GPUPrefabCrowdBenchmarkBehavior_SpawnedGroupInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* instanceRoot; // 0x10
		::NPCCrowd::GPUPrefab::MonoNPCCrowdGPUGroupController* controller; // 0x18
		::System::String* sourceName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_SPAWNEDGROUPINFO__CTOR_OFFSET))(this);
		}
	};
}
