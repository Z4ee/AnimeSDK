#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int NishastagaTriggerV2_GameState_TypeDefinitionIndex = 78491;

	enum class NishastagaTriggerV2_GameState : ::System::Int32
	{
		Unknown = 0,
		Ready = 1,
		ReadyToStart = 2,
		Start = 3,
		Finished = 4,
	};
}
