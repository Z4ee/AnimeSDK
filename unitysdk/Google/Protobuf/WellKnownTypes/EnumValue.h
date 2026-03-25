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
namespace Google::Protobuf::WellKnownTypes { class Option; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B2E210)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x15B2DCC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B2DE10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B2DDB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B2DF00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B2D8E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B2DD10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x15B2DD90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B2D880)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B2E600)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B2E450)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B2DA60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15B2DD20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x15B2DDA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B2E080)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B2E0E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B2E7D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B2DB20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B2DAC0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int EnumValue_TypeDefinitionIndex = 6239;

	class EnumValue : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::EnumValue*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::EnumValue*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValue_TypeDefinitionIndex)->GetStaticField(0xE9C0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__repeated_options_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValue_TypeDefinitionIndex)->GetStaticField(0xE9C8);
		}
		::System::String* name_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Option*>* options_; // 0x20
		::System::Int32 number_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::EnumValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::EnumValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::EnumValue*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::EnumValue*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::EnumValue* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::EnumValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NUMBER_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::EnumValue* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::EnumValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::EnumValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::EnumValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
