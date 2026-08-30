#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ECharacterNavSteerMode_TypeDefinitionIndex = 17231;

	enum class ECharacterNavSteerMode : ::System::Int32
	{
		Default = 0,
		MovingSteerOnly = 1,
	};
}
