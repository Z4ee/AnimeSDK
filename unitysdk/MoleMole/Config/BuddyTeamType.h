#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyTeamType_TypeDefinitionIndex = 45138;

	enum class BuddyTeamType : ::System::Int32
	{
		Assisting = 2,
		Fighting = 1,
		Unknown = 0,
	};
}
