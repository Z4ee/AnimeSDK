#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterFloatingState_TypeDefinitionIndex = 54497;

	enum class AdvCharacterFloatingState : ::System::Int32
	{
		Ground = 0,
		BlendIn = 1,
		Floating = 2,
		BlendOut = 3,
	};
}
