#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int CardInteractionPhase_TypeDefinitionIndex = 79558;

	enum class CardInteractionPhase : ::System::Int32
	{
		None = 0,
		Selecting = 1,
		FindingTarget = 2,
		Cancelled = 3,
	};
}
