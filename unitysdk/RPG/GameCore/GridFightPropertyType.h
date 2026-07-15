#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPropertyType_TypeDefinitionIndex = 23763;

	enum class GridFightPropertyType : ::System::Int32
	{
		AvatarStar = 0,
		AvatarRarity = 1,
		GlobalHP = 2,
		PresetTag = 3,
		LocationIndex = 4,
		OriginCharacterID = 5,
		MonsterStar = 6,
		AvatarEquip = 7,
		AvatarInactiveTrait = 8,
	};
}
