#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int VortexBoxItemType_TypeDefinitionIndex = 74902;

	enum class VortexBoxItemType : ::System::Int32
	{
		Edge = 0,
		Obstacle = 1,
		Box = 2,
		Vortex = 3,
	};
}
