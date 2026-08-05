#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamRelationship_TypeDefinitionIndex = 76818;

	enum class TeamRelationship : ::System::Int32
	{
		Allied = 0,
		Neutral = 2,
		Enemy = 1,
	};
}
