#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ResolvedIntentKind_TypeDefinitionIndex = 62246;

	enum class ResolvedIntentKind : ::System::Int32
	{
		NoContribution = 0,
		Resolved = 1,
	};
}
