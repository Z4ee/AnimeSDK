#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterSize_TypeDefinitionIndex = 73751;

	enum class CharacterSize : ::System::Int32
	{
		Gigantic = 4,
		Middle = 2,
		Large = 3,
		Small = 1,
		Tiny = 0,
	};
}
