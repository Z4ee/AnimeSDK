#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigConditionPredicate_TypeDefinitionIndex = 61763;

	struct alignas(8) ConfigConditionPredicate
	{
		::System::String* Condition; // 0x10
		::System::Boolean CheckValue; // 0x18
	};
}
