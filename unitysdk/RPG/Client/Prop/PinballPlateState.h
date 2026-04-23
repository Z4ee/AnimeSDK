#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int PinballPlateState_TypeDefinitionIndex = 72256;

	enum class PinballPlateState : ::System::Int32
	{
		Close0 = 0,
		Open0 = 1,
		Open1 = 2,
		Close1 = 3,
	};
}
