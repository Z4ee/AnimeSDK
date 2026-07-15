#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnviromentControlPriority_TypeDefinitionIndex = 23574;

	enum class EnviromentControlPriority : ::System::Int32
	{
		DEFAULT = 0,
		TIMEOFDAY = 1,
		SCENEAREA = 2,
		LEVEL_TRIGGER = 3,
		CHARACTER_EDITOR = 4,
		LOCAL_EVENT = 6,
		TRANSIT_ENV_TASK = 7,
		DYNAMIC_BLOCK_AREA = 8,
		DYNAMIC_BLOCK_AREA_LOCAL = 9,
		BATTLE_AREA = 10,
		TASK_DYNAMIC_BLOCK_BATTLE_AREA = 11,
		DYNAMIC_BLOCK_BATTLE_AREA = 12,
		TRANSIT_BATTLE_ENV_TASK = 13,
		STORY = 14,
		CUTSCENE = 15,
		AVATAR_SKILL = 18,
		UI3D = 21,
		UI3D_TASK_OVERRIDE = 22,
		TIMELINETEMP = 24,
		LOCK_CURRENT = 25,
		COUNT = 26,
		Apply = 99,
		Temporary = 100,
		Invalid = 101,
	};
}
