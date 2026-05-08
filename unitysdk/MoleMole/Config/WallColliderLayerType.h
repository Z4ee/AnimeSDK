#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WallColliderLayerType_TypeDefinitionIndex = 82931;

	enum class WallColliderLayerType : ::System::Int32
	{
		EntityCollisionWallMonster = 2,
		Default = 0,
		EntityCollisionWallCharacter = 1,
	};
}
