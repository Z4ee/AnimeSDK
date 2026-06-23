#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar_Boolean_TypeDefinitionIndex = 54676;

	struct alignas(8) TeleportToAvatar_Boolean
	{
		::System::String* Param; // 0x10
		::System::Boolean Value; // 0x18
	};
}
