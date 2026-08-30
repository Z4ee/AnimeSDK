#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int UIController_TransitionStyle_TypeDefinitionIndex = 72952;

	enum class UIController_TransitionStyle : ::System::Int32
	{
		Default = 1,
		OpenWithCut = 2,
		CloseWithCut = 4,
		EnterWithCut = 8,
		ExitWithCut = 16,
		Cut = 6,
		AboveBlack = 32,
		BelowBlack = 64,
		EnterWithFastForward = 128,
	};
}
