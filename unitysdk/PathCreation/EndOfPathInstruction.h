#pragma once
#include "unitysdk/unitysdk.h"

namespace PathCreation
{
	inline static constexpr unsigned int EndOfPathInstruction_TypeDefinitionIndex = 38105;

	enum class EndOfPathInstruction : ::System::Int32
	{
		Loop = 0,
		Reverse = 1,
		Stop = 2,
	};
}
