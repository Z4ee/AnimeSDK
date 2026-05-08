#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::ChessStateMachine
{
	inline static constexpr unsigned int ParamsType_TypeDefinitionIndex = 60591;

	enum class ParamsType : ::System::Int32
	{
		Trigger = 3,
		Int = 2,
		OnceTrigger = 4,
		NULL = 5,
		Float = 1,
		Bool = 0,
	};
}
