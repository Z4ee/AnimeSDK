#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetLineupShape_TypeDefinitionIndex = 75688;

	enum class PetLineupShape : ::System::Int32
	{
		None = 0,
		Vertical = 1,
		Horizontal = 2,
		Triangular = 3,
	};
}
