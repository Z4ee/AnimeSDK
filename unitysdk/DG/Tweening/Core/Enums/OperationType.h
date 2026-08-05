#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core::Enums
{
	inline static constexpr unsigned int OperationType_TypeDefinitionIndex = 28601;

	enum class OperationType : ::System::Int32
	{
		Complete = 0,
		Despawn = 1,
		Flip = 2,
		Goto = 3,
		Pause = 4,
		Play = 5,
		PlayForward = 6,
		PlayBackwards = 7,
		Rewind = 8,
		SmoothRewind = 9,
		Restart = 10,
		TogglePause = 11,
		IsTweening = 12,
	};
}
