#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_C0E4561226F6DD72.h"
#include "unitysdk/MoleMole/LogicButtonInputType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MultiInputKeyData_TypeDefinitionIndex = 49938;

	struct alignas(4) MultiInputKeyData
	{
		::Enum_3_C0E4561226F6DD72 SpaceType; // 0x10
		::MoleMole::LogicButtonInputType InputType; // 0x14
	};
}
