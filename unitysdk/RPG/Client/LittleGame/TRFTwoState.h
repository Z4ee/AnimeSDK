#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int TRFTwoState_TypeDefinitionIndex = 40265;

	enum class TRFTwoState : ::System::Int32
	{
		None = 0,
		Active = 1,
		Deactive = 2,
	};
}
