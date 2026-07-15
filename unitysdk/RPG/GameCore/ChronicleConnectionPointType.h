#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChronicleConnectionPointType_TypeDefinitionIndex = 18222;

	enum class ChronicleConnectionPointType : ::System::Int32
	{
		Right = 0,
		Left = 1,
		Top = 2,
		Down = 3,
	};
}
