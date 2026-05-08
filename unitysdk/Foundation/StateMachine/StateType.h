#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::StateMachine
{
	inline static constexpr unsigned int StateType_TypeDefinitionIndex = 9011;

	enum class StateType : ::System::Byte
	{
		State = 0x0,
		Machine = 0x1,
	};
}
