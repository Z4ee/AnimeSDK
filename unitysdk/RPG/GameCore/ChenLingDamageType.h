#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingDamageType_TypeDefinitionIndex = 15094;

	enum class ChenLingDamageType : ::System::Int32
	{
		Common = 0,
		Reflection = 1,
		Spread = 2,
	};
}
