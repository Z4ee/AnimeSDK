#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int ReadMessageThread_State_TypeDefinitionIndex = 35577;

	enum class ReadMessageThread_State : ::System::Int32
	{
		Reading = 0,
		LostConnection = 1,
		Max = 2,
	};
}
