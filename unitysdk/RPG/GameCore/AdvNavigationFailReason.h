#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNavigationFailReason_TypeDefinitionIndex = 54558;

	enum class AdvNavigationFailReason : ::System::Int32
	{
		None = 0,
		Abort = 1,
		UnReachable = 2,
		Skip = 3,
		Block = 4,
	};
}
