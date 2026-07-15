#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int HeliobusSNSPostPhase_TypeDefinitionIndex = 62749;

	enum class HeliobusSNSPostPhase : ::System::Int32
	{
		TakeMission = 1,
		Exorcism = 2,
		Post = 3,
	};
}
