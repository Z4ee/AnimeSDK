#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelPointType_TypeDefinitionIndex = 58343;

	enum class LevelPointType : ::System::Int32
	{
		GroupPoint = 2,
		FloorPoint = 1,
		NodePoint = 0,
	};
}
