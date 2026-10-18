#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetType_TypeDefinitionIndex = 75713;

	enum class PetType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		BlindBox = 2,
	};
}
