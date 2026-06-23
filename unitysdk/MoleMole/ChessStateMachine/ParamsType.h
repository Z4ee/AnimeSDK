#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsType_TypeDefinitionIndex = 52143;

	enum class ParamsType : ::System::Int32
	{
		Int = 2,
		Float = 1,
		Trigger = 3,
		OnceTrigger = 4,
		NULL = 5,
		Bool = 0,
	};
}
