#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int OnHitAnimType_TypeDefinitionIndex = 53405;

	enum class OnHitAnimType : ::System::Int32
	{
		None = 0,
		Hit = 1,
		Fly_Hit = 2,
		Hit_H = 3,
		Hit_Fly = 4,
	};
}
