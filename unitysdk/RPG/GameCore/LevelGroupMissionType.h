#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupMissionType_TypeDefinitionIndex = 16982;

	enum class LevelGroupMissionType : ::System::Int32
	{
		MainMission = 0,
		SubMission = 1,
	};
}
