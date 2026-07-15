#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleCollegeData_BattleCollegeStatus_TypeDefinitionIndex = 60096;

	enum class BattleCollegeData_BattleCollegeStatus : ::System::Int32
	{
		Unknown = 0,
		Locked = 1,
		Available = 2,
		Finish = 3,
	};
}
