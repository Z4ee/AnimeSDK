#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightTraitBonusAddType_TypeDefinitionIndex = 13016;

	enum class GridFightTraitBonusAddType : ::System::Int32
	{
		ByGameplay = 0,
		ByEquipNum = 1,
		ByConstWithPerfectPass = 2,
	};
}
