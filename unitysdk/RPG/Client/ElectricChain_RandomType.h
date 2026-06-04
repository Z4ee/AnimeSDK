#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ElectricChain_RandomType_TypeDefinitionIndex = 65888;

	enum class ElectricChain_RandomType : ::System::Int32
	{
		Sphere = 0,
		Box = 1,
	};
}
