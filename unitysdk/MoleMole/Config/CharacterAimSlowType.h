#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimSlowType_TypeDefinitionIndex = 49811;

	enum class CharacterAimSlowType : ::System::Int32
	{
		AttachPoint = 0,
		Collision = 1,
		Both = 2,
	};
}
