#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeFlatStorage_4_InlineData_TypeDefinitionIndex = 8633;

	template <typename TUserData, typename T1, typename T2, typename TPointer>
	struct NativeFlatStorage_4_InlineData
	{
		TUserData Data; // 0x0
		::System::Int64 Capacity; // 0x0
	};
}
