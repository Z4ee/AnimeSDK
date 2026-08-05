#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeBitArrayView_1.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2_InlineData.h"
#include "unitysdk/Foundation/Container/NativeVectorView_3.h"
#include "unitysdk/Foundation/Container/SparseArrayFreeIndex.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_TypeDefinitionIndex = 8614;

	template <typename TUserData, typename T>
	struct NativeSparseArrayView_2
	{
		::Foundation::Container::NativeVectorView_3<::Foundation::Container::NativeSparseArrayView_2_InlineData<TUserData, T>, ::Foundation::Container::SparseArrayFreeIndex, T> _data; // 0x0
		::Foundation::Container::NativeBitArrayView_1<::Foundation::Container::EmptyUserData> _allocationFlags; // 0x0
	};
}
