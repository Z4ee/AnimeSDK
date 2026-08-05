#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineCampType_TypeDefinitionIndex = 76833;

	enum class BuddyOutlineCampType : ::System::Int32
	{
		Allied = 2,
		Invalid = 10,
		Evil = 3,
		Self = 1,
	};
}
