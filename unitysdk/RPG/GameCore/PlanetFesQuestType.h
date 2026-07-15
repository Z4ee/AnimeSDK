#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlanetFesQuestType_TypeDefinitionIndex = 11750;

	enum class PlanetFesQuestType : ::System::Int32
	{
		None = 0,
		Achievement = 1,
		Task = 2,
	};
}
