#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcLodTemplateName_TypeDefinitionIndex = 10138;

	enum class NpcLodTemplateName : ::System::Int32
	{
		WithoutLod = 0,
		NPC_Avatar = 1,
		NPC_Normal = 2,
		NPC_MonsterLD = 3,
		NPC_Crowd = 4,
		NPC_Pedestrian = 5,
		NPC_Monster = 6,
	};
}
