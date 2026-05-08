#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineCampType_TypeDefinitionIndex = 72750;

	enum class BuddyOutlineCampType : ::System::Int32
	{
		Evil = 3,
		Invalid = 10,
		Allied = 2,
		Self = 1,
	};
}
