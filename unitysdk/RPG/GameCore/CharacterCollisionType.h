#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterCollisionType_TypeDefinitionIndex = 16324;

	enum class CharacterCollisionType : ::System::Int32
	{
		Capsule = 0,
		Box = 1,
	};
}
