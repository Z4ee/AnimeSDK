#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int UIShowPhase_TypeDefinitionIndex = 80592;

	enum class UIShowPhase : ::System::Int32
	{
		Shown = 0,
		Showing = 1,
		Hidden = 2,
		Hiding = 3,
	};
}
