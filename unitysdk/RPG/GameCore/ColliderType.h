#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ColliderType_TypeDefinitionIndex = 53420;

	enum class ColliderType : ::System::Int32
	{
		Unknown = 0,
		Box = 1,
		Sphere = 2,
		Capsule = 3,
	};
}
