#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/NameValueArrayLoopUpItem.h"
#include "unitysdk/Foundation/NativeVariableArray_1.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int NameValueArray_1_TypeDefinitionIndex = 9028;

	template <typename T>
	struct NameValueArray_1
	{
		::Foundation::NativeVariableArray_1<T> _values; // 0x0
		::Foundation::ReadOnlyNativeVariableArray_1<::Foundation::NameValueArrayLoopUpItem> _keys; // 0x0
		static ::Foundation::NameValueArray_1<T>* StaticGet_Null()
		{
			return (::Foundation::NameValueArray_1<T>*)Il2CppClass::FromTypeDefinitionIndex(NameValueArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
