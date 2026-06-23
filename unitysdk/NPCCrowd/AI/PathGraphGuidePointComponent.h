#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"

#define NPCCROWD_AI_PATHGRAPHGUIDEPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x102976E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphGuidePointComponent_TypeDefinitionIndex = 70117;

	class PathGraphGuidePointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHGUIDEPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
