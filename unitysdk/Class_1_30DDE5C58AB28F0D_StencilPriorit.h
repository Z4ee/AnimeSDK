#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_30DDE5C58AB28F0D_StencilPriorit_TypeDefinitionIndex = 67052;

enum class Class_1_30DDE5C58AB28F0D_StencilPriorit : ::System::Int32
{
	NotSet = 0,
	Normal = 1,
	NPC_Special = 2,
	NPC_Normal = 3,
	NPC_Monster = 4,
	NPC_Avatar = 5,
	NPC_Hero = 6,
	LocalPlayer = 7,
	Story_Normal = 8,
	Story_Monster = 9,
	Story_Special = 10,
	Story_Avatar = 11,
	Story_Hero = 12,
	CutSceneActor = 1000,
};
