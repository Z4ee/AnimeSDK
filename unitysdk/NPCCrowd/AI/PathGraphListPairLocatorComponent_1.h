#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphLocatorComponent.h"

namespace NPCCrowd::AI { template <typename T> class PathGraphListLocatorComponent_1; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphListPairLocatorComponent_1_TypeDefinitionIndex = 55962;

	template <typename T>
	class PathGraphListPairLocatorComponent_1 : public ::NPCCrowd::AI::PathGraphLocatorComponent
	{
	public:
		::NPCCrowd::AI::PathGraphListLocatorComponent_1<T>* locatorList1; // 0x0
		::NPCCrowd::AI::PathGraphListLocatorComponent_1<T>* locatorList2; // 0x0
	};
}
