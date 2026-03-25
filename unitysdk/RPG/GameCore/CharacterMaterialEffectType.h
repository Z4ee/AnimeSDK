#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialEffectType_TypeDefinitionIndex = 16712;

	enum class CharacterMaterialEffectType : ::System::Int32
	{
		None = 0,
		Frozen = 1,
	};
}
