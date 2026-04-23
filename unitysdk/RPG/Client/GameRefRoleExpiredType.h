#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GameRefRoleExpiredType_TypeDefinitionIndex = 59597;

	enum class GameRefRoleExpiredType : ::System::Int32
	{
		Rarity = 0,
		Position = 1,
		Deleted = 2,
	};
}
