#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TeamRelationship_TypeDefinitionIndex = 41557;

	enum class TeamRelationship : ::System::Int32
	{
		Enemy = 1,
		Allied = 0,
		Neutral = 2,
	};
}
