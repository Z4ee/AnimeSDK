#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityAlley
{
	inline static constexpr unsigned int AlleyPackDir_TypeDefinitionIndex = 74015;

	enum class AlleyPackDir : ::System::Int32
	{
		None = 0,
		Left = 1,
		Up = 2,
		Right = 3,
		Down = 4,
	};
}
