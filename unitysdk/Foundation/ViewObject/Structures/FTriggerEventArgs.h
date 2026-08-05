#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FTriggerEventArgs_TypeDefinitionIndex = 45341;

	struct alignas(8) FTriggerEventArgs
	{
		::System::String* TriggerName; // 0x10
		::MoleMole::EntityHandle OtherHandle; // 0x18
	};
}
