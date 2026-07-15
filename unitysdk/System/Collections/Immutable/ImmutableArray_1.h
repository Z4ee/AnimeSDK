#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections { class IEqualityComparer; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::Immutable
{
	inline static constexpr unsigned int ImmutableArray_1_TypeDefinitionIndex = 6994;

	template <typename T>
	struct ImmutableArray_1
	{
		static ::System::Collections::Immutable::ImmutableArray_1<T>* StaticGet_Empty()
		{
			return (::System::Collections::Immutable::ImmutableArray_1<T>*)Il2CppClass::FromTypeDefinitionIndex(ImmutableArray_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* array; // 0x0
	};
}
