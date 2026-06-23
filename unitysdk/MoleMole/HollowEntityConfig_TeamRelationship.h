#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_TeamRelationship_TypeDefinitionIndex = 70054;

	enum class HollowEntityConfig_TeamRelationship : ::System::Int32
	{
		Neutral = 2,
		Allied = 0,
		Enemy = 1,
	};
}
