#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Pet::BlindBox
{
	inline static constexpr unsigned int BlindBoxPetKind_TypeDefinitionIndex = 75729;

	enum class BlindBoxPetKind : ::System::Int32
	{
		None = 0,
		Raccoon = 1,
		Chimera = 2,
	};
}
