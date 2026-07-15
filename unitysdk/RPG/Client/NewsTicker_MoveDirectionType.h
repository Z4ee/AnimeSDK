#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int NewsTicker_MoveDirectionType_TypeDefinitionIndex = 65918;

	enum class NewsTicker_MoveDirectionType : ::System::Int32
	{
		Left = 0,
		Right = 1,
		Up = 2,
		Down = 3,
	};
}
