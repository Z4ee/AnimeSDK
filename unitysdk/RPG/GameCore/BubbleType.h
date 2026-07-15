#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BubbleType_TypeDefinitionIndex = 12442;

	enum class BubbleType : ::System::Int32
	{
		Invalid = 0,
		Left = 1,
		Right = 2,
	};
}
