#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesAssistantController_State_TypeDefinitionIndex = 63519;

	enum class PlanetFesAssistantController_State : ::System::Int32
	{
		Idle = 0,
		Showing = 1,
		Hide = 2,
	};
}
