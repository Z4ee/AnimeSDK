#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueType_TypeDefinitionIndex = 60760;

	enum class DialogueType : ::System::Int32
	{
		Data = 0,
		Graph = 1,
	};
}
