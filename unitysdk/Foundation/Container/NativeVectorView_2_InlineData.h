#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorView_2_InlineData_TypeDefinitionIndex = 8888;

	template <typename TUserData, typename T>
	struct NativeVectorView_2_InlineData
	{
		TUserData Data; // 0x0
		::System::Int64 Length; // 0x0
	};
}
