#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTeamType_TypeDefinitionIndex = 74210;

	enum class BuddyTeamType : ::System::Int32
	{
		Fighting = 1,
		Unknown = 0,
		Assisting = 2,
	};
}
