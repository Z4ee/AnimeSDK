#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildCardInfluenceScope_TypeDefinitionIndex = 10990;

	enum class EvolveBuildCardInfluenceScope : ::System::Int32
	{
		ForPeriod = 0,
		ForLevel = 1,
	};
}
