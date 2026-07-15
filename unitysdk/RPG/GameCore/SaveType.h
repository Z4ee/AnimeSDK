#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SaveType_TypeDefinitionIndex = 10114;

	enum class SaveType : ::System::Int32
	{
		SAVE_WHEN_START = 0,
		SAVE_WHEN_FINISH = 1,
	};
}
