#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ContactRole_TypeDefinitionIndex = 51313;

	enum class ContactRole : ::System::Int32
	{
		Player = 1,
		Pam = 2,
	};
}
