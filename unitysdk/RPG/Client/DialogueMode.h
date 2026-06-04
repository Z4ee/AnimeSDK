#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueMode_TypeDefinitionIndex = 63876;

	enum class DialogueMode : ::System::Int32
	{
		Default = 0,
		NoNPC = 1,
		Record = 2,
	};
}
