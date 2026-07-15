#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidCollectionType_TypeDefinitionIndex = 11847;

	enum class RaidCollectionType : ::System::Int32
	{
		Unknown = 0,
		Penacony = 1,
		LuoFu = 2,
		Amphoreus = 3,
	};
}
