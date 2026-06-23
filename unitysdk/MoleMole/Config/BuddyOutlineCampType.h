#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuddyOutlineCampType_TypeDefinitionIndex = 73432;

	enum class BuddyOutlineCampType : ::System::Int32
	{
		Self = 1,
		Invalid = 10,
		Allied = 2,
		Evil = 3,
	};
}
