#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Pet
{
	inline static constexpr unsigned int PetSummonStateType_TypeDefinitionIndex = 75707;

	enum class PetSummonStateType : ::System::Int32
	{
		None = 0,
		Solo = 1,
		Lineup = 2,
	};
}
