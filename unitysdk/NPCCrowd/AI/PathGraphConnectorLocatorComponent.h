#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFreePositionLocatorComponent.h"

#define NPCCROWD_AI_PATHGRAPHCONNECTORLOCATORCOMPONENT_GET_NEARESTCONNECTORNODEINDEX_OFFSET UNITYSDK_OFFSET(0xF685080)
#define NPCCROWD_AI_PATHGRAPHCONNECTORLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF685090)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphConnectorLocatorComponent_TypeDefinitionIndex = 45588;

	class PathGraphConnectorLocatorComponent : public ::NPCCrowd::AI::PathGraphFreePositionLocatorComponent
	{
	public:
		::System::Int32 nearestConnectorNodeID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}

		::System::Int32 get_NearestConnectorNodeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCONNECTORLOCATORCOMPONENT_GET_NEARESTCONNECTORNODEINDEX_OFFSET))(this);
		}
	};
}
