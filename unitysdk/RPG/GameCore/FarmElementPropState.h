#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FarmElementPropState_TypeDefinitionIndex = 53355;

	enum class FarmElementPropState : ::System::Int32
	{
		Frozen = 0,
		Active = 1,
	};
}
