#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeBitArraySetIndexEnumerator.h"
#include "unitysdk/Foundation/Container/Pointer_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_Enumerator_TypeDefinitionIndex = 8617;

	template <typename TUserData, typename T>
	struct NativeSparseArrayView_2_Enumerator
	{
		::Foundation::Container::Pointer_1<T> _data; // 0x0
		::Foundation::Container::NativeBitArraySetIndexEnumerator _indexEnumerator; // 0x0
	};
}
