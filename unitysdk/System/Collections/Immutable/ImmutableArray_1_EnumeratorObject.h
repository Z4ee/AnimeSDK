#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_1_EnumeratorObject_TypeDefinitionIndex = 6995;

	template <typename T>
	class ImmutableArray_1_EnumeratorObject : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::IEnumerator_1<T>** StaticGet_s_EmptyEnumerator()
		{
			return (::System::Collections::Generic::IEnumerator_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ImmutableArray_1_EnumeratorObject_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* _array; // 0x0
		::System::Int32 _index; // 0x0
	};
}
