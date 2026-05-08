#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"

#define NPCCROWD_AI_PATHGRAPHINITIALSPAWNPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xE8B6730)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphInitialSpawnPointComponent_TypeDefinitionIndex = 79878;

	class PathGraphInitialSpawnPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHINITIALSPAWNPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
