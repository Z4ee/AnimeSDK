#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int PatrolMove_MoveState_TypeDefinitionIndex = 65060;

	enum class PatrolMove_MoveState : ::System::Int32
	{
		MoveStart = 0,
		Stay = 2,
		Moving = 1,
		End = 3,
		Error = 4,
	};
}
