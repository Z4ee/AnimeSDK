#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole
{
	inline static constexpr unsigned int MaterialPropertyModifierValueColor_TypeDefinitionIndex = 58566;

	struct alignas(4) MaterialPropertyModifierValueColor
	{
		::System::Boolean active; // 0x10
		::System::Boolean enable; // 0x11
		::UnityEngine::Color value; // 0x14
	};
}
