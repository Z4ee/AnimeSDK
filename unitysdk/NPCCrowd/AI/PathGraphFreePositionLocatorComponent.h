#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphLocatorComponent.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_AI_PATHGRAPHFREEPOSITIONLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x114F5830)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphFreePositionLocatorComponent_TypeDefinitionIndex = 55264;

	class PathGraphFreePositionLocatorComponent : public ::NPCCrowd::AI::PathGraphLocatorComponent
	{
	public:
		::UnityEngine::Vector3 position; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHFREEPOSITIONLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
