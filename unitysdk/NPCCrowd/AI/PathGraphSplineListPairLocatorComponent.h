#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphListPairLocatorComponent_1.h"

namespace NPCCrowd::AI { class PathGraphSplineLocatorComponent; }

#define NPCCROWD_AI_PATHGRAPHSPLINELISTPAIRLOCATORCOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x157A7080)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphSplineListPairLocatorComponent_TypeDefinitionIndex = 58668;

	class PathGraphSplineListPairLocatorComponent : public ::NPCCrowd::AI::PathGraphListPairLocatorComponent_1<::NPCCrowd::AI::PathGraphSplineLocatorComponent*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AI_PATHGRAPHSPLINELISTPAIRLOCATORCOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
