#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BenefitActivityState_TypeDefinitionIndex = 58652;

	enum class BenefitActivityState : ::System::UInt32
	{
		LOCKED = 0x0,
		WAITING_CHOOSE = 0x1,
		WAITING_RESULT = 0x2,
		WAITING_RESULT_EXTENDED = 0x3,
		OVER = 0x4,
	};
}
