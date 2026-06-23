#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_InlineData_TypeDefinitionIndex = 8512;

	template <typename TUserData, typename T>
	struct NativeSparseArrayView_2_InlineData
	{
		TUserData Data; // 0x0
		::System::Int64 FirstFreeIndex; // 0x0
		::System::Int64 FreeIndexNum; // 0x0
	};
}
