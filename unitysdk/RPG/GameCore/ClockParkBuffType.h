#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkBuffType_TypeDefinitionIndex = 10767;

	enum class ClockParkBuffType : ::System::Int32
	{
		None = 0,
		FirstAttributeContinue = 1,
		SecondAttributeContinue = 2,
		ThirdAttributeContinue = 3,
		FirstAttributeStart = 4,
		SecondAttributeStart = 5,
		ThirdAttributeStart = 6,
		Revive = 7,
		Bank = 8,
		ReRoll = 9,
		FirstAttributeGainRate = 10,
		SecondAttributeGainRate = 11,
		ThirdAttributeGainRate = 12,
		CheckPointRelax = 13,
		DivideEqual = 14,
	};
}
