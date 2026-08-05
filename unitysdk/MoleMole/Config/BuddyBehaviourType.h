#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyBehaviourType_TypeDefinitionIndex = 51049;

	enum class BuddyBehaviourType : ::System::Int32
	{
		Free = 1,
		Guide = 2,
		Interactive = 3,
		Resurrection = 4,
	};
}
