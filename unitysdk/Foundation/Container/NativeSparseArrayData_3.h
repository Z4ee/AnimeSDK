#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeBitArrayData_2.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2_InlineData.h"
#include "unitysdk/Foundation/Container/NativeVectorData_4.h"
#include "unitysdk/Foundation/Container/SparseArrayFreeIndex.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayData_3_TypeDefinitionIndex = 9146;

	template <typename TUserData, typename T, typename TPointer>
	struct NativeSparseArrayData_3
	{
		::Foundation::Container::NativeVectorData_4<::Foundation::Container::NativeSparseArrayView_2_InlineData<TUserData, T>, ::Foundation::Container::SparseArrayFreeIndex, T, TPointer> _data; // 0x0
		::Foundation::Container::NativeBitArrayData_2<::Foundation::Container::EmptyUserData, TPointer> _allocationFlags; // 0x0
	};
}
