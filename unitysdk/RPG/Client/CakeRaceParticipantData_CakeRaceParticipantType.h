#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CakeRaceParticipantData_CakeRaceParticipantType_TypeDefinitionIndex = 60278;

	enum class CakeRaceParticipantData_CakeRaceParticipantType : ::System::Int32
	{
		Invalid = 0,
		Player = 1,
		Npc = 2,
	};
}
