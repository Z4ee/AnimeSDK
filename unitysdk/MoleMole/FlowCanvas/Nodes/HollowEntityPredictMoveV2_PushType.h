#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMoveV2_PushType_TypeDefinitionIndex = 80016;

	enum class HollowEntityPredictMoveV2_PushType : ::System::Int32
	{
		NotPush = 0,
		CanPush = 1,
	};
}
