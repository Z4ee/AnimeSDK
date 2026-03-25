#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubMissionState_TypeDefinitionIndex = 18597;

	enum class SubMissionState : ::System::Int32
	{
		Unknow = 0,
		Started = 1,
		Finish = 2,
		TakenAndNotStarted = 3,
	};
}
