#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterSize_TypeDefinitionIndex = 87661;

	enum class CharacterSize : ::System::Int32
	{
		Middle = 2,
		Tiny = 0,
		Gigantic = 4,
		Large = 3,
		Small = 1,
	};
}
