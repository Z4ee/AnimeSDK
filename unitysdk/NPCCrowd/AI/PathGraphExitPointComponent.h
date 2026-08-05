#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphExitPointComponent_ExitStyle.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"

#define NPCCROWD_AI_PATHGRAPHEXITPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF764EA0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointComponent_TypeDefinitionIndex = 59571;

	class PathGraphExitPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::NPCCrowd::AI::PathGraphExitPointComponent_ExitStyle exitStyle; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHEXITPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
