#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/DefaultConstruct.h"
#include "unitysdk/Foundation/NameValueArrayLoopUpItem.h"
#include "unitysdk/Foundation/ReadOnlyNativeVariableArray_1.h"
#include "unitysdk/System/ValueType.h"

namespace Foundation
{
	inline static constexpr unsigned int ReadOnlyNameValueArray_1_TypeDefinitionIndex = 8649;

	template <typename T>
	struct ReadOnlyNameValueArray_1
	{
		::Foundation::ReadOnlyNativeVariableArray_1<T> _values; // 0x0
		::Foundation::ReadOnlyNativeVariableArray_1<::Foundation::NameValueArrayLoopUpItem> _keys; // 0x0
		static ::Foundation::ReadOnlyNameValueArray_1<T>* StaticGet_Null()
		{
			return (::Foundation::ReadOnlyNameValueArray_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ReadOnlyNameValueArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
