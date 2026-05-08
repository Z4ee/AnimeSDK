#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/EmptyUserData.h"
#include "unitysdk/Foundation/Container/NativeVectorData_3.h"
#include "unitysdk/Foundation/Native/RawPointer.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeVector_1_TypeDefinitionIndex = 8920;

	template <typename T>
	struct NativeVector_1
	{
		::Foundation::Container::NativeVectorData_3<::Foundation::Container::EmptyUserData, T, ::Foundation::Native::RawPointer> _data; // 0x0
		::Unity::Collections::Allocator m_AllocatorLabel; // 0x0
	};
}
