#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeArrayView_2.h"
#include "unitysdk/Foundation/Container/NativeHashSetElementId.h"
#include "unitysdk/Foundation/Container/NativeHashSetView_3_Element.h"
#include "unitysdk/Foundation/Container/NativeSparseArrayView_2.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSetView_3_TypeDefinitionIndex = 9049;

	template <typename TUserData, typename T, typename TKeyFunc>
	struct NativeHashSetView_3
	{
		::Foundation::Container::NativeSparseArrayView_2<TUserData, ::Foundation::Container::NativeHashSetView_3_Element<TUserData, T, TKeyFunc>> _elements; // 0x0
		::Foundation::Container::NativeArrayView_2<::Foundation::Container::EmptyUserData, ::Foundation::Container::NativeHashSetElementId> _buckets; // 0x0
	};
}
