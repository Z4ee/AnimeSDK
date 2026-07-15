#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Debugging
{
	inline static constexpr unsigned int FormationDataServantMode_TypeDefinitionIndex = 76704;

	enum class FormationDataServantMode : ::System::Int32
	{
		Follow = 0,
		Team = 1,
	};
}
