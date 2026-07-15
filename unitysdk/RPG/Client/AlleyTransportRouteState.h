#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AlleyTransportRouteState_TypeDefinitionIndex = 59534;

	enum class AlleyTransportRouteState : ::System::Int32
	{
		Edit = 0,
		Draw = 1,
		Erase = 2,
		Wipe = 3,
	};
}
