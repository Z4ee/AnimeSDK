#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UnitTriggerDetectColliderType_TypeDefinitionIndex = 17599;

	enum class UnitTriggerDetectColliderType : ::System::UInt16
	{
		None = 0x0,
		MainCollider = 0x1,
		HitBox = 0x2,
		MainColliderAndHitBox = 0x3,
	};
}
