#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueBool_TypeDefinitionIndex = 74043;

	struct alignas(1) MaterialPropertyModifierValueBool
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::System::Boolean value; // 0x12
	};
}
