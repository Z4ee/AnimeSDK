#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipFuncType_TypeDefinitionIndex = 12943;

	enum class GridFightEquipFuncType : ::System::Int32
	{
		None = 0,
		AvatarMaxNumberAdd = 2,
		Leader = 3,
		CraftableThiefGlove = 5,
		RadiantThiefGlove = 6,
		OriginEmblem = 10,
		ClassEmblem = 11,
		AddTraitLayer = 12,
	};
}
