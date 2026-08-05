#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelPointType_TypeDefinitionIndex = 48718;

	enum class LevelPointType : ::System::Int32
	{
		FloorPoint = 1,
		GroupPoint = 2,
		NodePoint = 0,
	};
}
