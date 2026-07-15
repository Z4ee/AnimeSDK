#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlleyShipType_TypeDefinitionIndex = 12135;

	enum class AlleyShipType : ::System::Int32
	{
		Unknown = 0,
		Small = 1,
		Medium = 2,
		Large = 3,
	};
}
