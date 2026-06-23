#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyBehaviourType_TypeDefinitionIndex = 73679;

	enum class BuddyBehaviourType : ::System::Int32
	{
		Guide = 2,
		Interactive = 3,
		Free = 1,
		Resurrection = 4,
	};
}
