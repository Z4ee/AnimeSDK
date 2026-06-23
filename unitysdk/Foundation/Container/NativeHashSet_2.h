#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeHashSetData_4.h"
#include "unitysdk/Foundation/Native/RawPointer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeHashSet_2_TypeDefinitionIndex = 8445;

	template <typename T, typename TKeyFunc>
	struct NativeHashSet_2
	{
		::Foundation::Container::NativeHashSetData_4<::Foundation::Container::EmptyUserData, T, TKeyFunc, ::Foundation::Native::RawPointer> _data; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
