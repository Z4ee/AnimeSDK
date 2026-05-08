#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_TeamRelationship_TypeDefinitionIndex = 40470;

	enum class HollowEntityConfig_TeamRelationship : ::System::Int32
	{
		Allied = 0,
		Enemy = 1,
		Neutral = 2,
	};
}
