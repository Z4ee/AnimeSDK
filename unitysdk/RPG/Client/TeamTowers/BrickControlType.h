#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int BrickControlType_TypeDefinitionIndex = 78551;

	enum class BrickControlType : ::System::UInt32
	{
		SwipeControl = 0x0,
		ButtonControl = 0x1,
	};
}
