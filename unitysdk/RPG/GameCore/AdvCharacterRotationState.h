#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterRotationState_TypeDefinitionIndex = 52583;

	enum class AdvCharacterRotationState : ::System::Int32
	{
		None = 0,
		Rotation = 1,
		BlendOut = 2,
	};
}
