#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionState_TypeDefinitionIndex = 18599;

	enum class MainMissionState : ::System::Int32
	{
		Unknow = 0,
		Started = 1,
		Finish = 2,
	};
}
