#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int HarmonySyncMode_TypeDefinitionIndex = 67784;

	enum class HarmonySyncMode : ::System::Int32
	{
		SyncBeat = 0,
		SyncGrid = 1,
		SyncBar = 2,
	};
}
