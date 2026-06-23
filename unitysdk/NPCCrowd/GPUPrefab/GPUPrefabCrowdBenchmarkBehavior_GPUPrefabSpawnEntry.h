#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_GPUPREFABSPAWNENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x11F89600)

namespace NPCCrowd::GPUPrefab
{
	inline static constexpr unsigned int GPUPrefabCrowdBenchmarkBehavior_GPUPrefabSpawnEntry_TypeDefinitionIndex = 42790;

	class GPUPrefabCrowdBenchmarkBehavior_GPUPrefabSpawnEntry : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* groupPrefab; // 0x10
		::System::Int32 count; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_GPUPREFAB_GPUPREFABCROWDBENCHMARKBEHAVIOR_GPUPREFABSPAWNENTRY__CTOR_OFFSET))(this);
		}
	};
}
