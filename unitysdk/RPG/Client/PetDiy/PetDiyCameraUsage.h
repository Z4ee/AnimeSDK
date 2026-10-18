#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetDiy
{
	inline static constexpr unsigned int PetDiyCameraUsage_TypeDefinitionIndex = 74474;

	enum class PetDiyCameraUsage : ::System::Int32
	{
		None = 0,
		Entrance = 1,
		Edit = 2,
	};
}
