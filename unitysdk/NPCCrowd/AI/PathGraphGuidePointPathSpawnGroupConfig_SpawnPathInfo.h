#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::AI { class FeaturePointPathRef; }
namespace NPCCrowd::AI { class FeaturePointRef; }

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPCONFIG_SPAWNPATHINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1138B580)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo_TypeDefinitionIndex = 41253;

	class PathGraphGuidePointPathSpawnGroupConfig_SpawnPathInfo : public ::System::Object
	{
	public:
		::NPCCrowd::AI::FeaturePointPathRef* pathRef; // 0x10
		::NPCCrowd::AI::FeaturePointRef* initialSpawnPointRef; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTPATHSPAWNGROUPCONFIG_SPAWNPATHINFO__CTOR_OFFSET))(this);
		}
	};
}
