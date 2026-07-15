#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace System { class Array; }
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace MiHoYo::SDK::Protobuf::Collections
{
	inline static constexpr unsigned int RepeatedField_1_TypeDefinitionIndex = 34430;

	template <typename T>
	class RepeatedField_1 : public ::System::Object
	{
	public:
		static ::Il2CppArray<T>** StaticGet_EmptyArray()
		{
			return (::Il2CppArray<T>**)Il2CppClass::FromTypeDefinitionIndex(RepeatedField_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::Il2CppArray<T>* array; // 0x0
		::System::Int32 count; // 0x0
	};
}
