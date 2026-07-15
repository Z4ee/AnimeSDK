#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropSteerMode_TypeDefinitionIndex = 23734;

	enum class PropSteerMode : ::System::Int32
	{
		Duration = 0,
		Speed = 1,
	};
}
