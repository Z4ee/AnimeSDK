#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerAidState_TypeDefinitionIndex = 55773;

	enum class TriggerAidState : ::System::Int32
	{
		Prepare = 0,
		Excuting = 1,
		Reset = 2,
	};
}
