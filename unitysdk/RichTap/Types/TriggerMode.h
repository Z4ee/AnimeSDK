#pragma once
#include "unitysdk/unitysdk.h"

namespace RichTap::Types
{
	inline static constexpr unsigned int TriggerMode_TypeDefinitionIndex = 38083;

	enum class TriggerMode : ::System::Int32
	{
		Vibration = 0,
		Feedback = 1,
		Weapon = 2,
		None = -1,
	};
}
