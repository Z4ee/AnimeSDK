#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightHandBookType_TypeDefinitionIndex = 13070;

	enum class GridFightHandBookType : ::System::Int32
	{
		HandBookRole = 1,
		HandBookEquipItem = 2,
		HandBookAugment = 3,
		HandBookPortal = 4,
		HandBookMonster = 5,
		HandBookTrait = 6,
	};
}
