#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleBuffEffect_TypeDefinitionIndex = 15472;

	enum class MarbleBuffEffect : ::System::Int32
	{
		ChangeValue = 0,
		ActionCountToAttack = 1,
	};
}
