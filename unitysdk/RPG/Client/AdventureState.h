#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AdventureState_TypeDefinitionIndex = 56209;

	enum class AdventureState : ::System::Int32
	{
		Unknow = 0,
		Explor = 1,
		Story = 2,
	};
}
