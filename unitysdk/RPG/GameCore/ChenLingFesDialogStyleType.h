#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingFesDialogStyleType_TypeDefinitionIndex = 17701;

	enum class ChenLingFesDialogStyleType : ::System::Int32
	{
		None = 0,
		CountUp = 1,
		CountDown = 2,
		Multiplier = 3,
		PendingChenling = 4,
	};
}
