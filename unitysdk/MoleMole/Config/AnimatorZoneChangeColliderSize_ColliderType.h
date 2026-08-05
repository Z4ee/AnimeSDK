#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderType_TypeDefinitionIndex = 81541;

	enum class AnimatorZoneChangeColliderSize_ColliderType : ::System::Int32
	{
		Hit = 1,
		Hull = 0,
		Wall = 2,
	};
}
