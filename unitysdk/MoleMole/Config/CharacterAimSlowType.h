#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAimSlowType_TypeDefinitionIndex = 51987;

	enum class CharacterAimSlowType : ::System::Int32
	{
		Collision = 1,
		AttachPoint = 0,
		Both = 2,
	};
}
