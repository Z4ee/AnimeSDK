#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int MoveType_TypeDefinitionIndex = 47530;

	enum class MoveType : ::System::Int32
	{
		Default = 0,
		Navmesh = 1,
	};
}
