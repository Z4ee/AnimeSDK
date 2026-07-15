#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraDuelMarkerType_TypeDefinitionIndex = 39496;

	enum class ChimeraDuelMarkerType : ::System::Int32
	{
		JustSummoned = 0,
		Untargetable = 1,
	};
}
