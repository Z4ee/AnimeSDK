#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsType_TypeDefinitionIndex = 55534;

	enum class ParamsType : ::System::Int32
	{
		Trigger = 3,
		Bool = 0,
		Int = 2,
		OnceTrigger = 4,
		NULL = 5,
		Float = 1,
	};
}
