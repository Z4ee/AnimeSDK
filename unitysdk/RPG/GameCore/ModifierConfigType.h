#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierConfigType_TypeDefinitionIndex = 10172;

	enum class ModifierConfigType : ::System::Int32
	{
		ModifierNone = 0,
		ModifierTrainParty = 1,
	};
}
