#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCanMoveNeighborPosition_Param_CollisionType_TypeDefinitionIndex = 48908;

	enum class HollowEntityGetCanMoveNeighborPosition_Param_CollisionType : ::System::Int32
	{
		UseEntityCollisionMask = 1,
		IgnoreAllCollision = 0,
	};
}
