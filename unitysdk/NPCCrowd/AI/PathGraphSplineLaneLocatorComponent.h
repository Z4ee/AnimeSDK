#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphSplineLocatorComponent.h"

#define NPCCROWD_AI_PATHGRAPHSPLINELANELOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC7050)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineLaneLocatorComponent_TypeDefinitionIndex = 74947;

	class PathGraphSplineLaneLocatorComponent : public ::NPCCrowd::AI::PathGraphSplineLocatorComponent
	{
	public:
		::System::Int32 nearestSplineLaneIndex; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINELANELOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
