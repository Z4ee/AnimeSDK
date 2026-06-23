#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WindDirectionType_TypeDefinitionIndex = 49186;

	enum class WindDirectionType : ::System::Int32
	{
		WorldZ = 4,
		WorldX = 2,
		LinkObj = 0,
		WorldY = 3,
		Direct = 1,
	};
}
