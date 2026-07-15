#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EntityClassifyType_TypeDefinitionIndex = 55225;

	enum class EntityClassifyType : ::System::Int32
	{
		UnclassifiedEntity = 0,
		Mission = 1,
		District = 2,
		SceneProp = 3,
		PuzzleProp = 4,
		AtmoProp = 5,
		PlayerCreateProp = 6,
		MissionProp = 7,
		MissionFinishProp = 8,
		LocalPlayer = 9,
		NpcMonster = 10,
		AtmoNpc = 11,
		SceneNpc = 12,
		MissionNpc = 13,
		MissionFinishNpc = 14,
		MissionAtomProp = 15,
		MissionFinishAtomProp = 16,
		MissionAtomNpc = 17,
		MissionFinishAtomNpc = 18,
		MissionNpcMonster = 19,
		MissionFinishNpcMonster = 20,
		NpcCrowd = 21,
		MissionNpcCrowd = 22,
		MissionFinishNpcCrowd = 23,
		NpcPedestrian = 24,
		MissionNpcPedestrian = 25,
		MissionFinishNpcPedestrian = 26,
		Count = 27,
	};
}
