#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int MonsterIdToAccessories_TypeDefinitionIndex = 68080;

	struct alignas(8) MonsterIdToAccessories
	{
		::System::Int32 MonsterId; // 0x10
		::Il2CppArray<::System::Int32>* AccessoryArr; // 0x18
	};
}
