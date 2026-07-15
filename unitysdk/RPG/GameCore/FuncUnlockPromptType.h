#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FuncUnlockPromptType_TypeDefinitionIndex = 12808;

	enum class FuncUnlockPromptType : ::System::Int32
	{
		None = 0,
		Entrance = 1,
		Equipment = 2,
		Cocoon = 3,
		Handbook = 4,
	};
}
