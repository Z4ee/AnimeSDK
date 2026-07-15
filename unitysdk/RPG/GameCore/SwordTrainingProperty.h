#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingProperty_TypeDefinitionIndex = 23863;

	enum class SwordTrainingProperty : ::System::Int32
	{
		Unknown = 0,
		Power = 1,
		Agility = 2,
		Toughness = 3,
		Perception = 4,
	};
}
