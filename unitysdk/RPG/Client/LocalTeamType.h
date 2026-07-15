#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LocalTeamType_TypeDefinitionIndex = 65120;

	enum class LocalTeamType : ::System::Int32
	{
		Default = 0,
		BoxingClub = 1,
	};
}
