#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileHitActionType_TypeDefinitionIndex = 16053;

	enum class FiveDimSimpleProjectileHitActionType : ::System::UInt32
	{
		None = 0x0,
		BeatBack = 0x1,
		RecoverCrystal = 0x2,
		SpawnMinion = 0x4,
		HitCrystal = 0x8,
		SpawnMinionWhenHitOther = 0x10,
	};
}
