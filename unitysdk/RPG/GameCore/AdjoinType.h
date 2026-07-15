#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdjoinType_TypeDefinitionIndex = 23927;

	enum class AdjoinType : ::System::UInt16
	{
		Left = 0x1,
		Right = 0x2,
		LeftAndRight = 0x3,
	};
}
