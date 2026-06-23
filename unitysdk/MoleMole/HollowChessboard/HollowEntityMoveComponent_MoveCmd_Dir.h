#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_Dir_TypeDefinitionIndex = 52588;

	enum class HollowEntityMoveComponent_MoveCmd_Dir : ::System::Int32
	{
		Left = 2,
		Up = 0,
		Right = 3,
		Reset = 5,
		Undo = 4,
		Transfer = 6,
		Down = 1,
	};
}
