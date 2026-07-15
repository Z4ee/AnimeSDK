#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ValueDropdownItem_1_TypeDefinitionIndex = 9638;

	template <typename T>
	struct ValueDropdownItem_1
	{
		::System::String* Text; // 0x0
		T Value; // 0x0
	};
}
