#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_GroupLoadStatus_TypeDefinitionIndex = 62152;

	enum class RuntimeGroupManager_GroupLoadStatus : ::System::Int32
	{
		Unknown = 0,
		Load = 1,
		Unload = 2,
	};
}
