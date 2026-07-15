#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ContentParticipation_TypeDefinitionIndex = 59402;

	enum class ContentParticipation : ::System::Int32
	{
		None = 0,
		AuthorityBase = 1,
		AlwaysRaise = 2,
	};
}
