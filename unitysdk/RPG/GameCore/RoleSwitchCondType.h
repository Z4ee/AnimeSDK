#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RoleSwitchCondType_TypeDefinitionIndex = 12367;

	enum class RoleSwitchCondType : ::System::Int32
	{
		None = 0,
		ByMaxTrait = 1,
	};
}
