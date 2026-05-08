#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDShowCountDownUINode_CountDownMode_TypeDefinitionIndex = 40217;

	enum class LDShowCountDownUINode_CountDownMode : ::System::Int32
	{
		FROM_INPUT_REMAIN = 1,
		FROM_INPUT_TIME = 0,
	};
}
