#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityGetCanMoveNeighborIndex_Param_CollisionType_TypeDefinitionIndex = 56394;

	enum class HollowEntityGetCanMoveNeighborIndex_Param_CollisionType : ::System::Int32
	{
		IgnoreAllCollision = 0,
		UseEntityCollisionMask = 1,
	};
}
