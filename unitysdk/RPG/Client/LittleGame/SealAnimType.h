#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int SealAnimType_TypeDefinitionIndex = 40013;

	enum class SealAnimType : ::System::Int32
	{
		OnDead = 0,
		OnSelect = 1,
		OnHitWall = 2,
		OnDealDamage = 3,
		OnHit = 4,
		OnIdleShow = 5,
		OnPlayerControl = 6,
		Custom = 7,
		OnRevive = 8,
		OnReadyPhaseBegin = 9,
		OnCatched = 10,
	};
}
