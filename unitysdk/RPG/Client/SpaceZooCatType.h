#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int SpaceZooCatType_TypeDefinitionIndex = 63590;

	enum class SpaceZooCatType : ::System::Int32
	{
		Custom = 0,
		Template = 1,
		Special = 2,
	};
}
