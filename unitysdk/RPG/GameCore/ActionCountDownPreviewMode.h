#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActionCountDownPreviewMode_TypeDefinitionIndex = 23905;

	enum class ActionCountDownPreviewMode : ::System::Int32
	{
		Turn = 0,
		Action = 1,
		TurnWithUltra = 2,
	};
}
