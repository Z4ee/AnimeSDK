#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTeamType_TypeDefinitionIndex = 61473;

	enum class BuddyTeamType : ::System::Int32
	{
		Assisting = 2,
		Unknown = 0,
		Fighting = 1,
	};
}
