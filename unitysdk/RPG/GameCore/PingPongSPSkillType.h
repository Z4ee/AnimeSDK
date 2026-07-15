#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongSPSkillType_TypeDefinitionIndex = 16303;

	enum class PingPongSPSkillType : ::System::Int32
	{
		None = 0,
		Fire = 1,
		Ice = 2,
		Lighting = 3,
	};
}
