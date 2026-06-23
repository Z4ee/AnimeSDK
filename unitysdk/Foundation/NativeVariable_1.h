#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/NativeMemoryView_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int NativeVariable_1_TypeDefinitionIndex = 8730;

	template <typename T>
	struct NativeVariable_1
	{
		::Foundation::NativeMemoryView_1<T> _handle; // 0x0
		static ::Foundation::NativeVariable_1<T>* StaticGet_Null()
		{
			return (::Foundation::NativeVariable_1<T>*)Il2CppClass::FromTypeDefinitionIndex(NativeVariable_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
