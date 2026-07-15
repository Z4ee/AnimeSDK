#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MazeBuffDisplayType_TypeDefinitionIndex = 13507;

	enum class MazeBuffDisplayType : ::System::Int32
	{
		None = 0,
		Fixed = 1,
		Extra = 2,
	};
}
