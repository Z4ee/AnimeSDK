#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameModeType_TypeDefinitionIndex = 60639;

	enum class ChimeraGameModeType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Endless = 2,
	};
}
