#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCanMoveNeighborPosition_Param_CollisionType_TypeDefinitionIndex = 47538;

	enum class HollowEntityGetCanMoveNeighborPosition_Param_CollisionType : ::System::Int32
	{
		IgnoreAllCollision = 0,
		UseEntityCollisionMask = 1,
	};
}
