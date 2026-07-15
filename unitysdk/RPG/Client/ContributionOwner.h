#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ContributionOwner_TypeDefinitionIndex = 59400;

	enum class ContributionOwner : ::System::Int32
	{
		SystemDefault = 0,
		SourceDist = 1,
		ForceOverride = 2,
	};
}
