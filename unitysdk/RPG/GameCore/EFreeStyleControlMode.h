#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EFreeStyleControlMode_TypeDefinitionIndex = 54707;

	enum class EFreeStyleControlMode : ::System::Int32
	{
		Default = 0,
		Interaction = 1,
		InteractionGraph = 2,
		Mocap = 3,
	};
}
