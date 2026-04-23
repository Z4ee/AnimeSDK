#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class Value; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x171306C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x171302B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17130410)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17130300)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171304C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1712FF00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1712FEA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x171308C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17130760)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17130080)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x171305B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17130610)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x171309A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17130130)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x171300E0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue_TypeDefinitionIndex = 6233;

	class ListValue : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Value*>** StaticGet__repeated_values_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(ListValue_TypeDefinitionIndex)->GetStaticField(0x5090);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>**)Il2CppClass::FromTypeDefinitionIndex(ListValue_TypeDefinitionIndex)->GetStaticField(0x5098);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Value*>* values_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::ListValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::ListValue* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::ListValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
