#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int StateTreePhase_TypeDefinitionIndex = 36280;

	enum class StateTreePhase : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
	};
}
