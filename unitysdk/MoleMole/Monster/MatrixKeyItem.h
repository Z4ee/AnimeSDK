#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Monster
{
	inline static constexpr unsigned int MatrixKeyItem_TypeDefinitionIndex = 81892;

	struct alignas(8) MatrixKeyItem
	{
		::System::String* displayName; // 0x10
		::System::Int32 id; // 0x18
	};
}
