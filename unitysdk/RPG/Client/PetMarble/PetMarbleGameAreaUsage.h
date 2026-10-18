#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetMarble
{
	inline static constexpr unsigned int PetMarbleGameAreaUsage_TypeDefinitionIndex = 74718;

	enum class PetMarbleGameAreaUsage : ::System::Int32
	{
		None = 0,
		MainPage = 1,
		Battle = 2,
	};
}
