#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int TeleportToAvatar_Integer_TypeDefinitionIndex = 73160;

	struct alignas(8) TeleportToAvatar_Integer
	{
		::System::String* Param; // 0x10
		::System::Int32 Value; // 0x18
	};
}
