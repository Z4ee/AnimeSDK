#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimMoveState_TypeDefinitionIndex = 48738;

	enum class AnimMoveState : ::System::Int32
	{
		Walk = 1,
		Run = 0,
	};
}
