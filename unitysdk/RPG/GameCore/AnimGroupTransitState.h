#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AnimGroupTransitState_TypeDefinitionIndex = 52229;

	enum class AnimGroupTransitState : ::System::Byte
	{
		None = 0x0,
		In = 0x1,
		Out = 0x2,
	};
}
