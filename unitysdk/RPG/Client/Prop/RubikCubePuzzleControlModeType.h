#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int RubikCubePuzzleControlModeType_TypeDefinitionIndex = 74867;

	enum class RubikCubePuzzleControlModeType : ::System::Int32
	{
		ClickRotate = 0,
		DragRotate = 1,
	};
}
