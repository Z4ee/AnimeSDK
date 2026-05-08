#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int HitDataType_TypeDefinitionIndex = 52184;

	enum class HitDataType : ::System::Int32
	{
		Range = 0,
		Melee = 1,
	};
}
