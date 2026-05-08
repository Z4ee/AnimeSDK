#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd { class NPCSpawnPointRuntime; }
namespace NPCCrowd { class SpawnRangeConfig; }

#define NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNEDNPCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xD25E700)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCCrowdSpawnManager_SpawnedNpcInfo_TypeDefinitionIndex = 50414;

	class NPCCrowdSpawnManager_SpawnedNpcInfo : public ::System::Object
	{
	public:
		::NPCCrowd::NPCSpawnPointRuntime* SpawnPoint; // 0x10
		::NPCCrowd::SpawnRangeConfig* SpawnRangeConfig; // 0x18
		::Class_3_F2DAD7F45F518868* NpcComp; // 0x20
		::System::Boolean startFade; // 0x28
		::System::Boolean outRange; // 0x29
		::System::Int32 GraphID; // 0x2C
		::System::Single timer; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_NPCCROWDSPAWNMANAGER_SPAWNEDNPCINFO__CTOR_OFFSET))(this);
		}
	};
}
