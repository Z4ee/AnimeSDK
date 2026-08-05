#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultNativeAllocator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_CALCULATECAPACITYFORRESERVE_OFFSET UNITYSDK_OFFSET(0xA16C50)
#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_FREE_OFFSET UNITYSDK_OFFSET(0xA16D40)
#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x7463F0)
#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_MALLOC_OFFSET UNITYSDK_OFFSET(0xA16D60)
#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_RESOLVE_OFFSET UNITYSDK_OFFSET(0xA16D80)
#define FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

namespace Foundation::Container
{
	inline static constexpr unsigned int DefaultNativeVectorElementAllocator_TypeDefinitionIndex = 8675;

	struct alignas(4) DefaultNativeVectorElementAllocator
	{
		::Foundation::DefaultNativeAllocator _alloc; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR__CTOR_OFFSET))(this, allocator);
		}

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_GET_ISCREATED_OFFSET))(this);
		}

		::System::Int64 CalculateCapacityForReserve(::System::Int64 desiredNumber, ::System::Int64 elementSize)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_CALCULATECAPACITYFORRESERVE_OFFSET))(this, desiredNumber, elementSize);
		}

		/*
		::System::Void Free(::Foundation::Native::RawPointer memory)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Native::RawPointer))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_FREE_OFFSET))(this, memory);
		}
		*/

		/*
		::Foundation::Native::RawPointer Malloc(::System::Int64 size, ::System::Int32 alignment)
		{
			return ((::Foundation::Native::RawPointer(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_MALLOC_OFFSET))(this, size, alignment);
		}
		*/

		/*
		::System::Void* Resolve(::Foundation::Native::RawPointer memory)
		{
			return ((::System::Void*(*)(::PVOID, ::Foundation::Native::RawPointer))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_DEFAULTNATIVEVECTORELEMENTALLOCATOR_RESOLVE_OFFSET))(this, memory);
		}
		*/
	};
}
