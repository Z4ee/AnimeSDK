#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ColliderLayerType_TypeDefinitionIndex = 46131;

	enum class ColliderLayerType : ::System::Int32
	{
		EntityCollisionAvatar = 4,
		EntityCollisionMonster = 3,
		Character = 1,
		Default = 0,
		Monster = 2,
	};
}
