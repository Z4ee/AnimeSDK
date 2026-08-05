#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorZoneModifyFriction_ColliderType_TypeDefinitionIndex = 58999;

	enum class AnimatorZoneModifyFriction_ColliderType : ::System::Int32
	{
		WallCollider = 1,
		HullCollider = 0,
	};
}
