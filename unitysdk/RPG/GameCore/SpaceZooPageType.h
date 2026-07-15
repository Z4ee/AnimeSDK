#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpaceZooPageType_TypeDefinitionIndex = 23678;

	enum class SpaceZooPageType : ::System::Int32
	{
		Invalid = 0,
		Main = 1,
		Cattery = 2,
		Delete = 3,
		Bag = 4,
	};
}
