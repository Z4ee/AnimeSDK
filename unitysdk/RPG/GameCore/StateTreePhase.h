#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int StateTreePhase_TypeDefinitionIndex = 53847;

	enum class StateTreePhase : ::System::Int32
	{
		Ready = 0,
		Executing = 1,
	};
}
