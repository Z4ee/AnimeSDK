#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFreePositionLocatorComponent.h"

#define NPCCROWD_AI_PATHGRAPHSPLINELOCATORCOMPONENT_GET_NEARESTSPLINENODEINDEX_OFFSET UNITYSDK_OFFSET(0xD924F30)
#define NPCCROWD_AI_PATHGRAPHSPLINELOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xD924F40)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineLocatorComponent_TypeDefinitionIndex = 84406;

	class PathGraphSplineLocatorComponent : public ::NPCCrowd::AI::PathGraphFreePositionLocatorComponent
	{
	public:
		::System::Int32 nearestSplineNodeID; // 0x20
		::System::Boolean isForward; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINELOCATORCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_NearestSplineNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINELOCATORCOMPONENT_GET_NEARESTSPLINENODEINDEX_OFFSET))(this);
		}
	};
}
