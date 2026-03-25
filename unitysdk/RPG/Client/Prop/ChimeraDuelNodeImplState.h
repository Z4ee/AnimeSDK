#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int ChimeraDuelNodeImplState_TypeDefinitionIndex = 63700;

	enum class ChimeraDuelNodeImplState : ::System::Int32
	{
		InValid = 0,
		Ready = 1,
		Executing = 2,
		Finished = 3,
	};
}
