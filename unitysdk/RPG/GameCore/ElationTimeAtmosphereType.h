#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ElationTimeAtmosphereType_TypeDefinitionIndex = 24356;

	enum class ElationTimeAtmosphereType : ::System::Int32
	{
		Default = 0,
		Player = 1,
		Evanescia = 2,
		AventurineW = 3,
	};
}
