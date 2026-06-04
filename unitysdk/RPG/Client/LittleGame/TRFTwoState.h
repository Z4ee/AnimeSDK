#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFTwoState_TypeDefinitionIndex = 39456;

	enum class TRFTwoState : ::System::Int32
	{
		None = 0,
		Active = 1,
		Deactive = 2,
	};
}
