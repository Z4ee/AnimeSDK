#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnGroupConfig.h"

namespace NPCCrowd::AI { class PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x106F5550)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupConfig_TypeDefinitionIndex = 40138;

	class PathGraphGuidePointPathSpawnGroupConfig : public ::NPCCrowd::AI::PathGraphSpawnGroupConfig
	{
	public:
		::System::Boolean spawnCountLimit; // 0x48
		::System::Int32 maxSpawnCount; // 0x4C
		::System::Single spawnInterval; // 0x50
		::System::Single spawnVarious; // 0x54
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo*>* pathInfoList; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
