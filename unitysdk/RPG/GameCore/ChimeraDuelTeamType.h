#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelTeamType_TypeDefinitionIndex = 15282;

	enum class ChimeraDuelTeamType : ::System::Int32
	{
		None = 0,
		Ally = 1,
		Enemy = 2,
	};
}
