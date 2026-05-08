#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueFloat_TypeDefinitionIndex = 70347;

	struct alignas(4) MaterialPropertyModifierValueFloat
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::System::Single value; // 0x14
	};
}
