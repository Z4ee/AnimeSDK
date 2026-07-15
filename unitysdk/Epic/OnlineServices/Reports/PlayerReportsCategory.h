#pragma once
#include "unitysdk/unitysdk.h"

namespace Epic::OnlineServices::Reports
{
	inline static constexpr unsigned int PlayerReportsCategory_TypeDefinitionIndex = 43075;

	enum class PlayerReportsCategory : ::System::Int32
	{
		Invalid = 0,
		Cheating = 1,
		Exploiting = 2,
		OffensiveProfile = 3,
		VerbalAbuse = 4,
		Scamming = 5,
		Spamming = 6,
		Other = 7,
	};
}
