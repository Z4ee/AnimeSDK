#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_3.h"
#include "unitysdk/Foundation/Container/NativeVectorView_3_InlineData.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorView_3_TypeDefinitionIndex = 8828;

	template <typename TUserData, typename T1, typename T2>
	struct NativeVectorView_3
	{
		::Foundation::Container::NativeFlatStorageView_3<::Foundation::Container::NativeVectorView_3_InlineData<TUserData, T1, T2>, T1, T2> _view; // 0x0
	};
}
