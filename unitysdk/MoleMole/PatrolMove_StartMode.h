#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_StartMode_TypeDefinitionIndex = 65062;

	enum class PatrolMove_StartMode : ::System::Int32
	{
		FromClosestUnpassNode = 2,
		FromFirstNode = 0,
		FromClosestNode = 1,
	};
}
