#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DialogueItemType_TypeDefinitionIndex = 13535;

	enum class DialogueItemType : ::System::Int32
	{
		None = 0,
		Talk = 1,
		Option = 2,
	};
}
