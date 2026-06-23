#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigBuddyBehaviour_TypeDefinitionIndex = 52059;

	struct alignas(8) ConfigBuddyBehaviour
	{
		::System::String* ZoneTag; // 0x10
		::System::Int32 Priority; // 0x18
		::System::Boolean DisableAI; // 0x1C
		::System::Boolean ReEnqueueWhenBroken; // 0x1D
		::System::Boolean EnqueueWhenExist; // 0x1E
	};
}
