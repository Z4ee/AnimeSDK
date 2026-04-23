#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetJumpEnergyType_TypeDefinitionIndex = 17799;

	enum class SetJumpEnergyType : ::System::Int32
	{
		Set = 0,
		Add = 1,
	};
}
