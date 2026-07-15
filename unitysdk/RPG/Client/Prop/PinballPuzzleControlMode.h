#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPuzzleControlMode_TypeDefinitionIndex = 74813;

	enum class PinballPuzzleControlMode : ::System::Int32
	{
		None = 0,
		PrepareStart = 1,
		WaitForOrder = 2,
		WaitForLaunch = 3,
		LaunchEndPrepareExit = 4,
		UIClosePrepareExit = 5,
		Launch = 6,
	};
}
