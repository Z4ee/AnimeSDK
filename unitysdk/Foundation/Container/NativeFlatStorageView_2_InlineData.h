#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorageView_2_InlineData_TypeDefinitionIndex = 8484;

	template <typename TUserData, typename T>
	struct NativeFlatStorageView_2_InlineData
	{
		TUserData Data; // 0x0
		::System::Int64 Capacity; // 0x0
	};
}
