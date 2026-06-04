#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RuntimeGroupManager_GroupUnitSideType_TypeDefinitionIndex = 58048;

	enum class RuntimeGroupManager_GroupUnitSideType : ::System::Int32
	{
		Client = 0,
		Server = 1,
	};
}
