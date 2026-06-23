#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int WallColliderLayerType_TypeDefinitionIndex = 43140;

	enum class WallColliderLayerType : ::System::Int32
	{
		EntityCollisionWallCharacter = 1,
		Default = 0,
		EntityCollisionWallMonster = 2,
	};
}
