#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeferDeleteStatus_TypeDefinitionIndex = 55242;

	enum class DeferDeleteStatus : ::System::Byte
	{
		None = 0x0,
		LimboFinish = 0x1,
		DieAnimationFinish = 0x2,
		ProjectileFinish = 0x4,
		DeathrattleFinish = 0x8,
		DestroyWaitFinish = 0x10,
		AllFinish = 0x1F,
	};
}
