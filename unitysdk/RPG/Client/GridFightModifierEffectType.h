#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightModifierEffectType_TypeDefinitionIndex = 62071;

	enum class GridFightModifierEffectType : ::System::Int32
	{
		None = 0,
		ChangeRole = 1,
		EnhancedGrid = 2,
		SellRole = 3,
		UpgradeRole = 4,
		ReplaceNode = 5,
		InsertNode = 6,
		NpcBonus = 7,
		UpgradeEquipByRole = 8,
	};
}
