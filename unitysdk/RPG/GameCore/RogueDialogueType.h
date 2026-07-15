#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDialogueType_TypeDefinitionIndex = 10272;

	enum class RogueDialogueType : ::System::Int32
	{
		None = 0,
		Story = 1,
		Event = 2,
		Store = 3,
	};
}
