#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int AuthorityType_TypeDefinitionIndex = 35336;

	enum class AuthorityType : ::System::Byte
	{
		None = 0x0,
		Autonomous = 0x1,
		ServerAuthority = 0x2,
		Max = 0x3,
	};
}
