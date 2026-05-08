#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2.h"
#include "unitysdk/Foundation/ObjectService_ObjectItem.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace Foundation
{
	inline static constexpr unsigned int ObjectService___c__DisplayClass32_0_TypeDefinitionIndex = 8896;

	struct alignas(8) ObjectService___c__DisplayClass32_0
	{
		::System::Collections::Generic::List_1<::System::Int32>* objectsToRelease; // 0x10
		::Foundation::Container::NativeSparseArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::ObjectService_ObjectItem> objectItems; // 0x18
	};
}
