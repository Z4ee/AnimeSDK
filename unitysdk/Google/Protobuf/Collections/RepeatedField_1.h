#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace Google::Protobuf::Collections
{
	inline static constexpr unsigned int RepeatedField_1_TypeDefinitionIndex = 5595;

	template <typename T>
	class RepeatedField_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_EqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(RepeatedField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(RepeatedField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
	};
}
