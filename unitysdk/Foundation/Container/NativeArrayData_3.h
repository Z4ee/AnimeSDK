#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_3.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArrayOptions.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeArrayData_3_TypeDefinitionIndex = 8944;

	template <typename TUserData, typename T, typename TPointer>
	struct NativeArrayData_3
	{
		::Foundation::Container::NativeFlatStorage_3<TUserData, T, TPointer> _storage; // 0x0
	};
}
