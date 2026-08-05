#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ColliderLayerType_TypeDefinitionIndex = 90765;

	enum class ColliderLayerType : ::System::Int32
	{
		Monster = 2,
		Character = 1,
		Default = 0,
		EntityCollisionMonster = 3,
		EntityCollisionAvatar = 4,
	};
}
