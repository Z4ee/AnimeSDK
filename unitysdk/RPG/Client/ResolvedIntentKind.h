#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ResolvedIntentKind_TypeDefinitionIndex = 62163;

	enum class ResolvedIntentKind : ::System::Int32
	{
		NoContribution = 0,
		Resolved = 1,
	};
}
