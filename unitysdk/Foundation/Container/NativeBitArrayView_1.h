#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeBitArrayView_1_InlineData.h"
#include "unitysdk/Foundation/Container/NativeFlatStorageView_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArrayView_1_TypeDefinitionIndex = 8694;

	template <typename TUserData>
	struct NativeBitArrayView_1
	{
		::Foundation::Container::NativeFlatStorageView_2<::Foundation::Container::NativeBitArrayView_1_InlineData<TUserData>, ::System::UInt32> _view; // 0x0
	};
}
