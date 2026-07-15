#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int WeaknessState_TypeDefinitionIndex = 55160;

	enum class WeaknessState : ::System::Int32
	{
		Default = 0,
		Normal = 1,
		Protected = 2,
		Secret = 3,
	};
}
