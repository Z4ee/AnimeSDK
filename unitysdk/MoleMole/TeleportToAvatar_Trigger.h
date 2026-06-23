#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar_Trigger_TypeDefinitionIndex = 54673;

	struct alignas(8) TeleportToAvatar_Trigger
	{
		::System::String* Param; // 0x10
		::System::Boolean Value; // 0x18
	};
}
