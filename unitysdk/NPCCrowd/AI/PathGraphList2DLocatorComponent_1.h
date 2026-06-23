#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphLocatorComponent.h"

namespace NPCCrowd::AI { template <typename T> class PathGraphListLocatorComponent_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphList2DLocatorComponent_1_TypeDefinitionIndex = 79669;

	template <typename T>
	class PathGraphList2DLocatorComponent_1 : public ::NPCCrowd::AI::PathGraphLocatorComponent
	{
	public:
		::System::Collections::Generic::List_1<::NPCCrowd::AI::PathGraphListLocatorComponent_1<T>*>* locatorLists; // 0x0
	};
}
