#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int LDDestroyEntity_DestroyEntityType_TypeDefinitionIndex = 40739;

	enum class LDDestroyEntity_DestroyEntityType : ::System::Int32
	{
		Avatar = 1,
		SceneObject = 26,
		Bullet = 14,
		Monster = 2,
	};
}
