#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int SimpleGameplayTagRow_TypeDefinitionIndex = 47968;

	struct alignas(8) SimpleGameplayTagRow
	{
		::System::String* Tag; // 0x10
		::System::String* DevComment; // 0x18
	};
}
