#pragma once
#include "unitysdk/unitysdk.h"

namespace StageBudgetTool
{
	inline static constexpr unsigned int EntityType_TypeDefinitionIndex = 45952;

	enum class EntityType : ::System::Int32
	{
		Prpp_S = 0,
		Prop_A = 1,
		Prop_B = 2,
		Prop_C = 3,
		Prop_D = 4,
		Monster_1 = 5,
		Monster_2 = 6,
		Monster_3 = 7,
		Monster_4 = 8,
		Monster_5 = 9,
		NPC = 10,
		NPC_Avatar = 11,
		NPC_Special = 12,
		NPC_Monster = 13,
	};
}
