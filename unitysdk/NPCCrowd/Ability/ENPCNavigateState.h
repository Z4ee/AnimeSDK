#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int ENPCNavigateState_TypeDefinitionIndex = 58545;

	enum class ENPCNavigateState : ::System::Int32
	{
		PathFollow = 0,
		NavmeshToPathFollow = 2,
		Navmesh = 1,
	};
}
