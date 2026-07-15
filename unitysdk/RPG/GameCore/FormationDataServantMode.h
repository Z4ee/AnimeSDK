#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormationDataServantMode_TypeDefinitionIndex = 16445;

	enum class FormationDataServantMode : ::System::Int32
	{
		Follow = 0,
		Team = 1,
	};
}
