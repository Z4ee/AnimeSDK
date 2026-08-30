#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DialoguePhase_TypeDefinitionIndex = 68257;

	enum class DialoguePhase : ::System::Int32
	{
		NotInDialogue = 0,
		First = 1,
		Second = 2,
	};
}
