#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapEntryType_TypeDefinitionIndex = 13502;

	enum class MapEntryType : ::System::Int32
	{
		Unknown = 0,
		Town = 1,
		Mission = 2,
		Explore = 3,
	};
}
