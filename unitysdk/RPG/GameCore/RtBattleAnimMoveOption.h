#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleAnimMoveOption_TypeDefinitionIndex = 23932;

	enum class RtBattleAnimMoveOption : ::System::UInt32
	{
		None = 0x0,
		IgnoreRadius = 0x1,
		IsBehindTarget = 0x2,
		TraceTargetPos = 0x4,
		CollisionStop = 0x8,
	};
}
