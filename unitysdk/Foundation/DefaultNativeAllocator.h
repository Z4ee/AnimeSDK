#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define FOUNDATION_DEFAULTNATIVEALLOCATOR_EQUALS_OFFSET UNITYSDK_OFFSET(0x6DBDC0)
#define FOUNDATION_DEFAULTNATIVEALLOCATOR_FREE_OFFSET UNITYSDK_OFFSET(0x9CA7E0)
#define FOUNDATION_DEFAULTNATIVEALLOCATOR_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x7A4180)
#define FOUNDATION_DEFAULTNATIVEALLOCATOR_MALLOC_OFFSET UNITYSDK_OFFSET(0x9CA800)
#define FOUNDATION_DEFAULTNATIVEALLOCATOR_RESOLVE_OFFSET UNITYSDK_OFFSET(0x9CA820)
#define FOUNDATION_DEFAULTNATIVEALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

namespace Foundation
{
	inline static constexpr unsigned int DefaultNativeAllocator_TypeDefinitionIndex = 8482;

	struct alignas(4) DefaultNativeAllocator
	{
		::Unity::Collections::Allocator _type; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator type)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_DEFAULTNATIVEALLOCATOR__CTOR_OFFSET))(this, type);
		}

		/*
		::System::Void Free(::Foundation::Native::RawPointer memory)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Native::RawPointer))((::PBYTE)hIl2Cpp + FOUNDATION_DEFAULTNATIVEALLOCATOR_FREE_OFFSET))(this, memory);
		}
		*/

		/*
		::Foundation::Native::RawPointer Malloc(::System::Int64 size, ::System::Int32 alignment)
		{
			return ((::Foundation::Native::RawPointer(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_DEFAULTNATIVEALLOCATOR_MALLOC_OFFSET))(this, size, alignment);
		}
		*/

		/*
		::System::Void* Resolve(::Foundation::Native::RawPointer memory)
		{
			return ((::System::Void*(*)(::PVOID, ::Foundation::Native::RawPointer))((::PBYTE)hIl2Cpp + FOUNDATION_DEFAULTNATIVEALLOCATOR_RESOLVE_OFFSET))(this, memory);
		}
		*/

		::System::Boolean Equals(::Foundation::DefaultNativeAllocator other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Foundation::DefaultNativeAllocator))((::PBYTE)hIl2Cpp + FOUNDATION_DEFAULTNATIVEALLOCATOR_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_DEFAULTNATIVEALLOCATOR_GET_ISCREATED_OFFSET))(this);
		}
	};
}
