#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameRefRoleExpiredType_TypeDefinitionIndex = 61823;

	enum class GameRefRoleExpiredType : ::System::Int32
	{
		Rarity = 0,
		Position = 1,
		Deleted = 2,
	};
}
