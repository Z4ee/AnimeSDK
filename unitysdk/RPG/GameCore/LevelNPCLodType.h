#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelNPCLodType_TypeDefinitionIndex = 16487;

	enum class LevelNPCLodType : ::System::Int32
	{
		Normal = 0,
		KeepAnimation = 1,
	};
}
