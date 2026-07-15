#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int HipplenStatType_TypeDefinitionIndex = 10039;

	enum class HipplenStatType : ::System::Int32
	{
		None = 0,
		IQ = 1,
		EQ = 2,
		Strength = 3,
		Energy = 4,
		Pressure = 5,
		Count = 6,
	};
}
