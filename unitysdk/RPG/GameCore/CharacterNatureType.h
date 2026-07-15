#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterNatureType_TypeDefinitionIndex = 10057;

	enum class CharacterNatureType : ::System::Int32
	{
		NatureNone = 0,
		Biologic = 1,
		Mechanoid = 2,
		Psychic = 3,
		Quantum = 4,
		Imaginary = 5,
		Chaos = 6,
		NatureTypeCount = 8,
	};
}
