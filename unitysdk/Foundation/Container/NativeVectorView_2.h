#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_2.h"
#include "unitysdk/Foundation/Container/NativeVectorView_2_InlineData.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVectorView_2_TypeDefinitionIndex = 8549;

	template <typename TUserData, typename T>
	struct NativeVectorView_2
	{
		::Foundation::Container::NativeFlatStorageView_2<::Foundation::Container::NativeVectorView_2_InlineData<TUserData, T>, T> _view; // 0x0
	};
}
