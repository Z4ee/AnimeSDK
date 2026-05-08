#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeArrayData_3.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeHashSetView_3_Element.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayData_3.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetData_4_TypeDefinitionIndex = 9100;

	template <typename TUserData, typename T, typename TKeyFunc, typename TPointer>
	struct NativeHashSetData_4
	{
		::Foundation::Container::NativeSparseArrayData_3<TUserData, ::Foundation::Container::NativeHashSetView_3_Element<TUserData, T, TKeyFunc>, TPointer> _elements; // 0x0
		::Foundation::Container::NativeArrayData_3<::Foundation::Container::EmptyUserData, ::Foundation::Container::NativeHashSetElementId, TPointer> _buckets; // 0x0
	};
}
