#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropEventType_TypeDefinitionIndex = 54819;

	enum class PropEventType : ::System::Int32
	{
		OnCreate = 0,
		OnBeHit = 1,
		OnDestroy = 2,
		OnDestruction = 3,
		Count = 4,
	};
}
