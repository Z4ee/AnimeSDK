#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphConfigComponent.h"

#define NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B717F0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFeaturePointComponent_TypeDefinitionIndex = 72185;

	class PathGraphFeaturePointComponent : public ::NPCCrowd::AI::PathGraphConfigComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFEATUREPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
