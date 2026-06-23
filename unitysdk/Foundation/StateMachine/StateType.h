#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int StateType_TypeDefinitionIndex = 8692;

	enum class StateType : ::System::Byte
	{
		Machine = 0x1,
		State = 0x0,
	};
}
