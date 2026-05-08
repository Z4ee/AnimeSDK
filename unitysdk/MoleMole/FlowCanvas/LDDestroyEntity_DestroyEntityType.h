#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDDestroyEntity_DestroyEntityType_TypeDefinitionIndex = 54787;

	enum class LDDestroyEntity_DestroyEntityType : ::System::Int32
	{
		Monster = 2,
		SceneObject = 26,
		Bullet = 14,
		Avatar = 1,
	};
}
