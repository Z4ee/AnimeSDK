#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DOFCocMethodType_TypeDefinitionIndex = 16251;

	enum class DOFCocMethodType : ::System::Int32
	{
		None = 0,
		RegionCoc = 1,
		PhysicsCoc = 2,
	};
}
