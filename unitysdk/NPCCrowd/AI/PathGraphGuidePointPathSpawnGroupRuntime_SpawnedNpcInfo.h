#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_F2DAD7F45F518868;
namespace NPCCrowd::AI { class PathGraphSpawnPointComponentRuntime; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNEDNPCINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA664B70)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupRuntime_SpawnedNpcInfo_TypeDefinitionIndex = 62852;

	class PathGraphGuidePointPathSpawnGroupRuntime_SpawnedNpcInfo : public ::System::Object
	{
	public:
		::Class_3_F2DAD7F45F518868* NpcComp; // 0x10
		::NPCCrowd::AI::PathGraphSpawnPointComponentRuntime* SpawnPoint; // 0x18
		::System::Int32 GraphID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPRUNTIME_SPAWNEDNPCINFO__CTOR_OFFSET))(this);
		}
	};
}
