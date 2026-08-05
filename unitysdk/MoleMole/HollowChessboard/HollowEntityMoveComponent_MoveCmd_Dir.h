#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_Dir_TypeDefinitionIndex = 80053;

	enum class HollowEntityMoveComponent_MoveCmd_Dir : ::System::Int32
	{
		Left = 2,
		Right = 3,
		Down = 1,
		Undo = 4,
		Up = 0,
		Reset = 5,
		Transfer = 6,
	};
}
