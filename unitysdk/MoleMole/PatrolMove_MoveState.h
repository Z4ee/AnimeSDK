#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_MoveState_TypeDefinitionIndex = 40094;

	enum class PatrolMove_MoveState : ::System::Int32
	{
		MoveStart = 0,
		Error = 4,
		End = 3,
		Moving = 1,
		Stay = 2,
	};
}
