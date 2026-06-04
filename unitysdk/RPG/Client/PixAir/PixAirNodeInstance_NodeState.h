#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirNodeInstance_NodeState_TypeDefinitionIndex = 73670;

	enum class PixAirNodeInstance_NodeState : ::System::Int32
	{
		Invalid = 0,
		Waiting = 1,
		Processing = 2,
		Finished = 3,
	};
}
