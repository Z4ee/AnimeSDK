#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeBitArrayView_1_InlineData.h"
#include "unitysdk/Foundation/Container/NativeFlatStorage_3.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeBitArrayData_2_TypeDefinitionIndex = 8500;

	template <typename TUserData, typename TPointer>
	struct NativeBitArrayData_2
	{
		::Foundation::Container::NativeFlatStorage_3<::Foundation::Container::NativeBitArrayView_1_InlineData<TUserData>, ::System::UInt32, TPointer> _data; // 0x0
	};
}
