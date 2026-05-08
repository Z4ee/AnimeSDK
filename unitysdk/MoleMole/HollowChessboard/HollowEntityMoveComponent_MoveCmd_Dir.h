#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HollowEntityMoveComponent_MoveCmd_Dir_TypeDefinitionIndex = 78691;

	enum class HollowEntityMoveComponent_MoveCmd_Dir : ::System::Int32
	{
		Reset = 5,
		Undo = 4,
		Left = 2,
		Down = 1,
		Transfer = 6,
		Right = 3,
		Up = 0,
	};
}
