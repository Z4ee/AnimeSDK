#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PersonalizeCardUseType_TypeDefinitionIndex = 62127;

	enum class PersonalizeCardUseType : ::System::Int32
	{
		PlayerCard = 0,
		FriendCard = 1,
		SupportCard = 2,
		ChatCard = 3,
	};
}
