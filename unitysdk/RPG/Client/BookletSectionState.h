#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BookletSectionState_TypeDefinitionIndex = 59288;

	enum class BookletSectionState : ::System::Int32
	{
		Hidden = 0,
		Locked = 1,
		Readable = 2,
		HasRead = 3,
	};
}
