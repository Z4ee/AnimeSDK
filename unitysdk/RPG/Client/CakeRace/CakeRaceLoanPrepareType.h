#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::CakeRace
{
	inline static constexpr unsigned int CakeRaceLoanPrepareType_TypeDefinitionIndex = 75988;

	enum class CakeRaceLoanPrepareType : ::System::Int32
	{
		FromFieldInfo = 0,
		FromInvited = 1,
		FromGameplayReturnMatch = 2,
	};
}
