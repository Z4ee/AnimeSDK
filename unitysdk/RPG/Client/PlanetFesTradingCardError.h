#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PlanetFesTradingCardError_TypeDefinitionIndex = 63639;

	enum class PlanetFesTradingCardError : ::System::Int32
	{
		None = 0,
		FreeApply = 1,
		OutOfSyncPermissionBan = 2,
		OutOfSyncPermissionFree = 3,
		NotEnoughItem = 4,
		ItemListIsFull = 5,
		AlreadyOwnedPiece = 6,
		ExpireMessage = 7,
		NotFriend = 8,
		Error = 9,
	};
}
