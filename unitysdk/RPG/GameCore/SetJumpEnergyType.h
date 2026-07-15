#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetJumpEnergyType_TypeDefinitionIndex = 18003;

	enum class SetJumpEnergyType : ::System::Int32
	{
		Set = 0,
		Add = 1,
	};
}
