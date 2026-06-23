#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::AntiCheatCommon
{
	inline static constexpr unsigned int AntiCheatCommonPlayerTakeDamageType_TypeDefinitionIndex = 36251;

	enum class AntiCheatCommonPlayerTakeDamageType : ::System::Int32
	{
		None = 0,
		PointDamage = 1,
		RadialDamage = 2,
		DamageOverTime = 3,
	};
}
