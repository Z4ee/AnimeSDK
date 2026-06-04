#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Motions
{
	inline static constexpr unsigned int TextMotionState_TypeDefinitionIndex = 68637;

	enum class TextMotionState : ::System::Int32
	{
		Idle = 0,
		ExitingLast = 1,
		MotionDirty = 2,
		CreatingMotion = 3,
		Playing = 4,
		WaitFinish = 5,
	};
}
