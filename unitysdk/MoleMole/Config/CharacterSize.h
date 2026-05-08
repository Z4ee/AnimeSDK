#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterSize_TypeDefinitionIndex = 39536;

	enum class CharacterSize : ::System::Int32
	{
		Tiny = 0,
		Gigantic = 4,
		Middle = 2,
		Large = 3,
		Small = 1,
	};
}
