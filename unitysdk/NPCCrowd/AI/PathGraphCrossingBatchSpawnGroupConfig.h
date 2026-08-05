#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSpawnGroupConfig.h"
#include "unitysdk/NPCCrowd/AI/RangeInt.h"

namespace NPCCrowd::AI { class FeaturePointPathRefList; }
namespace NPCCrowd::AI { class FeaturePointRef; }

#define NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x10B39580)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingBatchSpawnGroupConfig_TypeDefinitionIndex = 42644;

	class PathGraphCrossingBatchSpawnGroupConfig : public ::NPCCrowd::AI::PathGraphSpawnGroupConfig
	{
	public:
		::NPCCrowd::AI::FeaturePointRef* batchSpawnPoint; // 0x48
		::NPCCrowd::AI::FeaturePointPathRefList* pathList; // 0x50
		::NPCCrowd::AI::RangeInt spawnCount; // 0x58
		::System::Single moveStartInterval; // 0x60
		::System::Single moveStartIntervalVarious; // 0x64
		::System::Single maxCrossingTime; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGBATCHSPAWNGROUPCONFIG__CTOR_OFFSET))(this);
		}
	};
}
