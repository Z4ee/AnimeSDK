#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Conflict_GroupUnitType_TypeDefinitionIndex = 45367;

enum class Conflict_GroupUnitType : ::System::Int32
{
	Unknown = 0,
	MissionGroup = 1,
	NormalNPC = 2,
	PatchGroup = 3,
	NormalGroup = 4,
	OtherFloorMissionGroup = 5,
	OtherFloorNormalNpc = 6,
};
