#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamRelationship_TypeDefinitionIndex = 47631;

	enum class TeamRelationship : ::System::Int32
	{
		Neutral = 2,
		Allied = 0,
		Enemy = 1,
	};
}
