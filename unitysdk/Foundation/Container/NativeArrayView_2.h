#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeArrayView_2_TypeDefinitionIndex = 8898;

	template <typename TUserData, typename T>
	struct NativeArrayView_2
	{
		::Foundation::Container::NativeFlatStorageView_2<TUserData, T> _view; // 0x0
	};
}
