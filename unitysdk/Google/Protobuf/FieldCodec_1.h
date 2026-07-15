#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_InputMerger; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueReaderFunc; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueSizeCalculatorFunc; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValueWriterAction; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1_ValuesMerger; }
namespace System::Collections::Generic { template <typename T> class EqualityComparer_1; }

namespace Google::Protobuf
{
	inline static constexpr unsigned int FieldCodec_1_TypeDefinitionIndex = 5388;

	template <typename T>
	class FieldCodec_1 : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::EqualityComparer_1<T>** StaticGet_EqualityComparer()
		{
			return (::System::Collections::Generic::EqualityComparer_1<T>**)Il2CppClass::FromTypeDefinitionIndex(FieldCodec_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static T* StaticGet_DefaultDefault()
		{
			return (T*)Il2CppClass::FromTypeDefinitionIndex(FieldCodec_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Boolean* StaticGet_TypeSupportsPacking()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FieldCodec_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean _PackedRepeatedField_k__BackingField; // 0x0
		::Google::Protobuf::FieldCodec_1_ValueWriterAction<T>* _ValueWriter_k__BackingField; // 0x0
		::Google::Protobuf::FieldCodec_1_ValueSizeCalculatorFunc<T>* _ValueSizeCalculator_k__BackingField; // 0x0
		::Google::Protobuf::FieldCodec_1_ValueReaderFunc<T>* _ValueReader_k__BackingField; // 0x0
		::Google::Protobuf::FieldCodec_1_InputMerger<T>* _ValueMerger_k__BackingField; // 0x0
		::Google::Protobuf::FieldCodec_1_ValuesMerger<T>* _FieldMerger_k__BackingField; // 0x0
		::System::Int32 _FixedSize_k__BackingField; // 0x0
		::System::UInt32 _Tag_k__BackingField; // 0x0
		::System::UInt32 _EndTag_k__BackingField; // 0x0
		T _DefaultValue_k__BackingField; // 0x0
		::System::Int32 tagSize; // 0x0
	};
}
