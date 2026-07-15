#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ECharacterNavSteerMode_TypeDefinitionIndex = 16729;

	enum class ECharacterNavSteerMode : ::System::Int32
	{
		Default = 0,
		MovingSteerOnly = 1,
	};
}
