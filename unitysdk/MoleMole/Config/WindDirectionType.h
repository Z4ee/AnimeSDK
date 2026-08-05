#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WindDirectionType_TypeDefinitionIndex = 70335;

	enum class WindDirectionType : ::System::Int32
	{
		Direct = 1,
		WorldX = 2,
		LinkObj = 0,
		WorldZ = 4,
		WorldY = 3,
	};
}
