#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaLegendMessage_TypeDefinitionIndex = 68098;

	enum class RogueTournPersonaLegendMessage : ::System::Int32
	{
		None = 0,
		OnSelectedTabChanged = 1,
	};
}
