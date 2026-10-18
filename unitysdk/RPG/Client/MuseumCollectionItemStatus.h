#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MuseumCollectionItemStatus_TypeDefinitionIndex = 66341;

	enum class MuseumCollectionItemStatus : ::System::Int32
	{
		None = 0,
		Owned = 1,
	};
}
