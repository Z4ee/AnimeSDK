#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int InLevelOptionsCardSelectItemData_TypeDefinitionIndex = 52816;

	struct alignas(4) InLevelOptionsCardSelectItemData
	{
		::System::Int32 ItemId; // 0x10
		::System::Int32 ItemCount; // 0x14
	};
}
