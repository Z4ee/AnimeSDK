#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionDelayChangeReason_TypeDefinitionIndex = 55158;

	enum class ActionDelayChangeReason : ::System::Int32
	{
		Defalut = 0,
		Advance = 1,
		ActionEnd = 2,
		AllReset = 3,
		TaskReset = 4,
		TaskEffect = 5,
		TaskInit = 6,
		CreateInit = 7,
		SpeedChange = 8,
		CreateDistanceInit = 9,
		LinkChange = 10,
		LinkInit = 11,
		ImmediateAction = 12,
		GM = 13,
	};
}
