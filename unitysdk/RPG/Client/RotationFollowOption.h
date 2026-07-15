#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RotationFollowOption_TypeDefinitionIndex = 66922;

	enum class RotationFollowOption : ::System::Int32
	{
		NotFollow = 0,
		AttachPointRotation = 1,
		EntityFaceDir = 2,
		RigidbodyVelocity = 3,
		MainCamera = 4,
		LookAtCamera = 5,
		UICamera = 6,
		PrefabOriginValue = 7,
		UI3DCamera = 8,
		LevelAreaRootRotation = 9,
	};
}
