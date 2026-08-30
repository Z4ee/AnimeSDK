#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterMaterialEffectType_TypeDefinitionIndex = 18001;

	enum class CharacterMaterialEffectType : ::System::Int32
	{
		None = 0,
		Frozen = 1,
	};
}
