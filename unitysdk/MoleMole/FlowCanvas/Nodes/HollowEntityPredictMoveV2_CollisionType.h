#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMoveV2_CollisionType_TypeDefinitionIndex = 67990;

	enum class HollowEntityPredictMoveV2_CollisionType : ::System::Int32
	{
		IgnoreAllCollision = 0,
		UseEntityCollisionMask = 1,
	};
}
