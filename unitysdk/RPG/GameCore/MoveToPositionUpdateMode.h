#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MoveToPositionUpdateMode_TypeDefinitionIndex = 45825;

	enum class MoveToPositionUpdateMode : ::System::Int32
	{
		DontUpdate = 0,
		UpdateByTeamFormation = 1,
	};
}
