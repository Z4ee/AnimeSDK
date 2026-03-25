#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Array_EmptyInternalEnumerator_1; }

namespace System
{
	inline static constexpr unsigned int Array_EmptyInternalEnumerator_1_TypeDefinitionIndex = 139;

	template <typename T>
	class Array_EmptyInternalEnumerator_1 : public ::System::Object
	{
	public:
		static ::System::Array_EmptyInternalEnumerator_1<T>** StaticGet_Value()
		{
			return (::System::Array_EmptyInternalEnumerator_1<T>**)Il2CppClass::FromTypeDefinitionIndex(Array_EmptyInternalEnumerator_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
