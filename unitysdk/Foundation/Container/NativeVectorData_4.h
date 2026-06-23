#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_4.h"
#include "unitysdk/Foundation/Container/NativeVectorView_3_InlineData.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorData_4_TypeDefinitionIndex = 8544;

	template <typename TUserData, typename T1, typename T2, typename TPointer>
	struct NativeVectorData_4
	{
		::Foundation::Container::NativeFlatStorage_4<::Foundation::Container::NativeVectorView_3_InlineData<TUserData, T1, T2>, T1, T2, TPointer> _storage; // 0x0
	};
}
