#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_3.h"
#include "unitysdk/Foundation/Container/NativeVectorView_2_InlineData.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorData_3_TypeDefinitionIndex = 8505;

	template <typename TUserData, typename T, typename TPointer>
	struct NativeVectorData_3
	{
		::Foundation::Container::NativeFlatStorage_3<::Foundation::Container::NativeVectorView_2_InlineData<TUserData, T>, T, TPointer> _storage; // 0x0
	};
}
