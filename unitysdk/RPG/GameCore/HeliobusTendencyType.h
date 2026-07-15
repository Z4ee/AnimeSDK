#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HeliobusTendencyType_TypeDefinitionIndex = 13238;

	enum class HeliobusTendencyType : ::System::Int32
	{
		Unknown = 0,
		Tendency1 = 1,
		Tendency2 = 2,
		Tendency3 = 3,
		Tendency4 = 4,
	};
}
