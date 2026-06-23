#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneChangeColliderSize_ColliderType_TypeDefinitionIndex = 80605;

	enum class AnimatorZoneChangeColliderSize_ColliderType : ::System::Int32
	{
		Wall = 2,
		Hit = 1,
		Hull = 0,
	};
}
