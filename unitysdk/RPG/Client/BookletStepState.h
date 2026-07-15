#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BookletStepState_TypeDefinitionIndex = 69177;

	enum class BookletStepState : ::System::Int32
	{
		Ready = 0,
		Running = 1,
		Completed = 2,
		Destroyed = 3,
	};
}
