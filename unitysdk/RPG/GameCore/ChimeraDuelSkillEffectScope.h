#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelSkillEffectScope_TypeDefinitionIndex = 10756;

	enum class ChimeraDuelSkillEffectScope : ::System::Int32
	{
		None = 0,
		Shop = 1,
		Battle = 2,
	};
}
