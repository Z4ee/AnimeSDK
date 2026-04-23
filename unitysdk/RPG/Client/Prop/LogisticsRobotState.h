#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int LogisticsRobotState_TypeDefinitionIndex = 72437;

	enum class LogisticsRobotState : ::System::Int32
	{
		NoActivate = 0,
		ActivatedNotLoad = 1,
		Loaded = 2,
		ReachEnd = 3,
	};
}
