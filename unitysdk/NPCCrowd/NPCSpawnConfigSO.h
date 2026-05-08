#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"

namespace NPCCrowd { class GraphSpawnRangeConfig; }
namespace NPCCrowd { class SpawnRangeConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_NPCSPAWNCONFIGSO__CTOR_OFFSET UNITYSDK_OFFSET(0xEA59C60)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCSpawnConfigSO_TypeDefinitionIndex = 49139;

	class NPCSpawnConfigSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
	{
	public:
		::System::Single spawnInterval; // 0x58
		::System::Int32 spawnCount; // 0x5C
		::NPCCrowd::SpawnRangeConfig* NPCConfig; // 0x60
		::System::Collections::Generic::List_1<::NPCCrowd::GraphSpawnRangeConfig*>* GraphConfigs; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCSPAWNCONFIGSO__CTOR_OFFSET))(this);
		}
	};
}
