#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCollisionType_TypeDefinitionIndex = 15848;

	enum class CharacterCollisionType : ::System::Int32
	{
		Capsule = 0,
		Box = 1,
	};
}
