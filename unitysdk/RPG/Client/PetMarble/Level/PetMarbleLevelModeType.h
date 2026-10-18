#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PetMarble::Level
{
	inline static constexpr unsigned int PetMarbleLevelModeType_TypeDefinitionIndex = 74747;

	enum class PetMarbleLevelModeType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Hard = 2,
	};
}
