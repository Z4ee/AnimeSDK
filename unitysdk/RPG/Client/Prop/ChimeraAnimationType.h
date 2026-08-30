#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraAnimationType_TypeDefinitionIndex = 77922;

	enum class ChimeraAnimationType : ::System::Int32
	{
		None = 0,
		Idle = 1,
		Walk = 2,
		Jump = 3,
	};
}
