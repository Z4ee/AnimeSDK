#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MiniMapManager_EMinimapIconListState_TypeDefinitionIndex = 60756;

	enum class MiniMapManager_EMinimapIconListState : ::System::Int32
	{
		Dirty = 0,
		Sorted = 1,
		Filtered = 2,
	};
}
