#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PVSOptSamplerType_TypeDefinitionIndex = 23575;

	enum class PVSOptSamplerType : ::System::Int32
	{
		AutoGen = 0,
		RandomSearch = 1,
		Custom = 2,
	};
}
