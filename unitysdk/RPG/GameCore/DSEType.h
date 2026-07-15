#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DSEType_TypeDefinitionIndex = 14966;

	enum class DSEType : ::System::Int32
	{
		Unknow = 0,
		DefaultDSE = 1,
		AdventureDefaultDSE = 2,
	};
}
