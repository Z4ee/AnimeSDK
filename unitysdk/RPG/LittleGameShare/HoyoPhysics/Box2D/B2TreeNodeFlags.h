#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::HoyoPhysics::Box2D
{
	inline static constexpr unsigned int B2TreeNodeFlags_TypeDefinitionIndex = 35251;

	enum class B2TreeNodeFlags : ::System::Int32
	{
		b2_allocatedNode = 1,
		b2_enlargedNode = 2,
		b2_leafNode = 4,
	};
}
