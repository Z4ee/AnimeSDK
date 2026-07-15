#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int AnimTriggerType_TypeDefinitionIndex = 45348;

enum class AnimTriggerType : ::System::Int32
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
	OnUI3DSwim = 11,
};
