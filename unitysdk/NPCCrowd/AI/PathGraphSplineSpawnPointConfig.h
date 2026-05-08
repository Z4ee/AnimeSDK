#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"

#define NPCCROWD_AI_PATHGRAPHSPLINESPAWNPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0xEC77050)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineSpawnPointConfig_TypeDefinitionIndex = 63696;

	class PathGraphSplineSpawnPointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINESPAWNPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
