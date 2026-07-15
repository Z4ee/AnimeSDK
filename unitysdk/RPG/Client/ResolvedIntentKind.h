#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ResolvedIntentKind_TypeDefinitionIndex = 59411;

	enum class ResolvedIntentKind : ::System::Int32
	{
		NoContribution = 0,
		Resolved = 1,
	};
}
