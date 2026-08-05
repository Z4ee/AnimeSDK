#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/AI/PathGraphLocatorComponent.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PathGraphListLocatorComponent_1_TypeDefinitionIndex = 58026;

	template <typename T>
	class PathGraphListLocatorComponent_1 : public ::NPCCrowd::AI::PathGraphLocatorComponent
	{
	public:
		::System::Collections::Generic::List_1<T>* locators; // 0x0
	};
}
