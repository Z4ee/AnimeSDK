#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyInteractionCategory_TypeDefinitionIndex = 17540;

	enum class PetPartyInteractionCategory : ::System::Int32
	{
		Single = 1,
		Double = 2,
		Triple = 3,
	};
}
