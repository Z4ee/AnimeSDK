#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyStatus_TypeDefinitionIndex = 74483;

	enum class PetDiyStatus : ::System::Int32
	{
		CurPlaced = 0,
		Available = 1,
		Occupied = 2,
		OnTraded = 3,
	};
}
