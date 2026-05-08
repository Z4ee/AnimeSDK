#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/HierarchicalHashGrid2DData_3.h"
#include "unitysdk/Foundation/Native/RawPointer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int HierarchicalHashGrid2D_2_TypeDefinitionIndex = 9162;

	template <typename T, typename TEqualsFunc>
	struct HierarchicalHashGrid2D_2
	{
		::Foundation::Container::HierarchicalHashGrid2DData_3<T, TEqualsFunc, ::Foundation::Native::RawPointer> _data; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
