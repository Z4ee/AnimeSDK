#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtDelayCallState_TypeDefinitionIndex = 51659;

	enum class RtDelayCallState : ::System::Int32
	{
		Waiting = 0,
		Finish = 1,
		Cancel = 2,
	};
}
