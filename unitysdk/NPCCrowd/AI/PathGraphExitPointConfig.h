#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphExitPointConfig_ExitStyle.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointConfig.h"

#define NPCCROWD_AI_PATHGRAPHEXITPOINTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11921010)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphExitPointConfig_TypeDefinitionIndex = 75849;

	class PathGraphExitPointConfig : public ::NPCCrowd::AI::PathGraphFeaturePointConfig
	{
	public:
		::NPCCrowd::AI::PathGraphExitPointConfig_ExitStyle exitStyle; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHEXITPOINTCONFIG__CTOR_OFFSET))(this);
		}
	};
}
