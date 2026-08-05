#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int HollowEntityPredictMove_PushType_TypeDefinitionIndex = 45359;

	enum class HollowEntityPredictMove_PushType : ::System::Int32
	{
		NotPush = 0,
		CanPush = 1,
	};
}
