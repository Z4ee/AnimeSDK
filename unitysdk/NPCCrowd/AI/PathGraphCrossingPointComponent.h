#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphCrossingPointComponent_StopMode.h"
#include "unitysdk/NPCCrowd/AI/PathGraphFeaturePointComponent.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0xF84BFB0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphCrossingPointComponent_TypeDefinitionIndex = 43655;

	class PathGraphCrossingPointComponent : public ::NPCCrowd::AI::PathGraphFeaturePointComponent
	{
	public:
		::NPCCrowd::AI::PathGraphCrossingPointComponent_StopMode stopMode; // 0x10
		::System::Int32 waitingSlotTemplateID; // 0x14
		::UnityEngine::Vector3 waitingSlotPos; // 0x18
		::UnityEngine::Vector3 waitingSlotRot; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHCROSSINGPOINTCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
