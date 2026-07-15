#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionFinishType_TypeDefinitionIndex = 10078;

	enum class MissionFinishType : ::System::Int32
	{
		Unknown = 0,
		Talk = 1,
		StageWin = 2,
		KillMonster = 3,
		EnterRegion = 4,
		LeaveRegion = 5,
		PropState = 6,
		ItemNum = 7,
	};
}
