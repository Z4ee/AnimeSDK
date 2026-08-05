#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_StartMode_TypeDefinitionIndex = 65431;

	enum class PatrolMove_StartMode : ::System::Int32
	{
		FromClosestNode = 1,
		FromFirstNode = 0,
		FromClosestUnpassNode = 2,
	};
}
