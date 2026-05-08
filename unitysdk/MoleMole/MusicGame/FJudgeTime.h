#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::MusicGame
{
	inline static constexpr unsigned int FJudgeTime_TypeDefinitionIndex = 79832;

	struct alignas(4) FJudgeTime
	{
		::System::Single MissJudgeTime; // 0x10
		::System::Single GreatJudgeTime; // 0x14
		::System::Single PerfectJudgeTime; // 0x18
	};
}
