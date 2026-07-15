#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState_TypeDefinitionIndex = 59311;

	enum class RuntimeGroupManager_HoYoGroupUnit_RegionRefreshState : ::System::Int32
	{
		None = 0,
		Active = 1,
		Deactive = 2,
	};
}
