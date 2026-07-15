#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoDestructibleObject_DestructibleState_TypeDefinitionIndex = 65532;

	enum class MonoDestructibleObject_DestructibleState : ::System::Int32
	{
		WaitInit = 0,
		Static = 1,
		Destructing = 2,
		Destructed = 3,
		FadeOut = 4,
		WillDestroy = 5,
		BrokenStatic = 6,
	};
}
