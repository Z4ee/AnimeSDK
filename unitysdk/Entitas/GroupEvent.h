#pragma once
#include "unitysdk/unitysdk.h"

namespace Entitas
{
	inline static constexpr unsigned int GroupEvent_TypeDefinitionIndex = 9691;

	enum class GroupEvent : ::System::Byte
	{
		Added = 0x0,
		Removed = 0x1,
		AddedOrRemoved = 0x2,
	};
}
