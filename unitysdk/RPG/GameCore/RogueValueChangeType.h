#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueValueChangeType_TypeDefinitionIndex = 10240;

	enum class RogueValueChangeType : ::System::Int32
	{
		None = 0,
		Set = 1,
		Add = 2,
		Mul = 3,
		MinSet = 4,
		MaxSet = 5,
	};
}
