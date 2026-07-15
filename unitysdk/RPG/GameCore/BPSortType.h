#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BPSortType_TypeDefinitionIndex = 23847;

	enum class BPSortType : ::System::Int32
	{
		Stack = 0,
		Queue = 1,
		SpecialFirstStack = 2,
	};
}
