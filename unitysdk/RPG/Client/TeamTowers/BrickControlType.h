#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int BrickControlType_TypeDefinitionIndex = 75053;

	enum class BrickControlType : ::System::UInt32
	{
		SwipeControl = 0x0,
		ButtonControl = 0x1,
	};
}
