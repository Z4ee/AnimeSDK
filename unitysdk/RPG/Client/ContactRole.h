#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ContactRole_TypeDefinitionIndex = 60440;

	enum class ContactRole : ::System::Int32
	{
		None = 0,
		Player = 1,
		Pam = 2,
		OnlinePlayRoom = 3,
	};
}
