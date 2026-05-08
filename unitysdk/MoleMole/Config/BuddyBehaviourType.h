#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyBehaviourType_TypeDefinitionIndex = 82847;

	enum class BuddyBehaviourType : ::System::Int32
	{
		Free = 1,
		Interactive = 3,
		Guide = 2,
		Resurrection = 4,
	};
}
