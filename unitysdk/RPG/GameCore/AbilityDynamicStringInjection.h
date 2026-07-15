#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityDynamicStringInjection_TypeDefinitionIndex = 51929;

	struct alignas(8) AbilityDynamicStringInjection
	{
		::System::Int32 Hash; // 0x10
		::System::String* Value; // 0x18
	};
}
