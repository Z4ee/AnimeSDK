#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_StartMode_TypeDefinitionIndex = 40095;

	enum class PatrolMove_StartMode : ::System::Int32
	{
		FromClosestUnpassNode = 2,
		FromClosestNode = 1,
		FromFirstNode = 0,
	};
}
