#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MessageSpecialChangeType_TypeDefinitionIndex = 13871;

	enum class MessageSpecialChangeType : ::System::Int32
	{
		None = 0,
		Flash = 1,
		HackIn = 2,
		HackOut = 3,
	};
}
