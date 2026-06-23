#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMove_CollisionType_TypeDefinitionIndex = 78899;

	enum class HollowEntityPredictMove_CollisionType : ::System::Int32
	{
		IgnoreAllCollision = 0,
		UseEntityCollisionMask = 1,
	};
}
