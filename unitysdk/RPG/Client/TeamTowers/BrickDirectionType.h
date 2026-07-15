#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	inline static constexpr unsigned int BrickDirectionType_TypeDefinitionIndex = 75054;

	enum class BrickDirectionType : ::System::UInt32
	{
		Clockwise = 0x0,
		CounterClockwise = 0x1,
	};
}
