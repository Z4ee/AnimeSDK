#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ReadOnlyNativeVariableArray_1_TypeDefinitionIndex = 8580;

	template <typename T>
	struct ReadOnlyNativeVariableArray_1
	{
		::Foundation::NativeMemoryView_1<T> _handle; // 0x0
		static ::Foundation::ReadOnlyNativeVariableArray_1<T>* StaticGet_Null()
		{
			return (::Foundation::ReadOnlyNativeVariableArray_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyNativeVariableArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
