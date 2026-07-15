#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int VersusBarEffectType_TypeDefinitionIndex = 23832;

	enum class VersusBarEffectType : ::System::Int32
	{
		Undefine = 0,
		Normal = 1,
		High = 2,
		Fever = 3,
	};
}
