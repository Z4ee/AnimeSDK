#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation::Container
{
	inline static constexpr unsigned int NativeSparseArrayView_2_AllocationResult_TypeDefinitionIndex = 8615;

	template <typename TUserData, typename T>
	struct NativeSparseArrayView_2_AllocationResult
	{
		::System::Int64 Index; // 0x0
		::System::IntPtr Pointer; // 0x0
		static ::Foundation::Container::NativeSparseArrayView_2_AllocationResult<TUserData, T>* StaticGet_Null()
		{
			return (::Foundation::Container::NativeSparseArrayView_2_AllocationResult<TUserData, T>*)Il2CppClass::FromTypeDefinitionIndex(NativeSparseArrayView_2_AllocationResult_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
