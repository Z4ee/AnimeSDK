#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphList2DLocatorComponent_1.h"

namespace NPCCrowd::AI { class PathGraphSplineControlPointLocatorComponent; }

#define NPCCROWD_AI_PATHGRAPHSPLINECONTROLPOINTLIST2DLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD87FB30)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineControlPointList2DLocatorComponent_TypeDefinitionIndex = 76298;

	class PathGraphSplineControlPointList2DLocatorComponent : public ::NPCCrowd::AI::PathGraphList2DLocatorComponent_1<::NPCCrowd::AI::PathGraphSplineControlPointLocatorComponent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINECONTROLPOINTLIST2DLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
