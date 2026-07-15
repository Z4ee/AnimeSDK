#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorType_TypeDefinitionIndex = 13523;

	enum class FloorType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		Indoor = 2,
	};
}
