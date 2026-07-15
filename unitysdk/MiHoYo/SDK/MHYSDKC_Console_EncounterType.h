#pragma once
#include "unitysdk/unitysdk.h"

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MHYSDKC_Console_EncounterType_TypeDefinitionIndex = 44424;

	enum class MHYSDKC_Console_EncounterType : ::System::Int32
	{
		Default = 0,
		Teammate = 1,
		Opponent = 2,
	};
}
