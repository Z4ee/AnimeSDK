#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ReadOnlyNativeVariable_1_TypeDefinitionIndex = 8497;

	template <typename T>
	struct ReadOnlyNativeVariable_1
	{
		::Foundation::NativeMemoryView_1<T> _handle; // 0x0
		static ::Foundation::ReadOnlyNativeVariable_1<T>* StaticGet_Null()
		{
			return (::Foundation::ReadOnlyNativeVariable_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyNativeVariable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
