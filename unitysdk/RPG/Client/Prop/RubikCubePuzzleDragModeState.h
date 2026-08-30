#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleDragModeState_TypeDefinitionIndex = 78353;

	enum class RubikCubePuzzleDragModeState : ::System::Int32
	{
		Ready = 0,
		LockControl = 1,
		Drag = 2,
		Rotate = 3,
		DragCamera = 4,
		RotateCamera = 5,
	};
}
