#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSourceType_TypeDefinitionIndex = 54894;

	enum class TargetSourceType : ::System::Int32
	{
		Default = 0,
		Group = 1,
		Taunt = 2,
		External = 3,
	};
}
