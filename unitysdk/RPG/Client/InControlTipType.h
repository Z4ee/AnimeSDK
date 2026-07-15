#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int InControlTipType_TypeDefinitionIndex = 58562;

	enum class InControlTipType : ::System::Int32
	{
		Unknown = 0,
		Keyboard = 1,
		Mouse = 2,
		Controller = 3,
	};
}
