#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AliveState_TypeDefinitionIndex = 55229;

	enum class AliveState : ::System::Int32
	{
		Unknow = 0,
		Alive = 1,
		Limbo = 2,
		LimboRevivable = 3,
		Deathrattle = 4,
		Dying = 5,
		Died = 6,
		WillBeDestroy = 7,
		Destroyed = 8,
	};
}
