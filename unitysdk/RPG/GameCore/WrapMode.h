#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WrapMode_TypeDefinitionIndex = 15693;

	enum class WrapMode : ::System::Int32
	{
		Default = 0,
		Clamp = 1,
		Once = 1,
		Loop = 2,
		PingPong = 4,
		ClampForever = 8,
	};
}
