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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBC0FA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBC0A20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBC0B50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBC0AF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBC0CB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC05E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1DBC0A70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1DBC0AD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DBC0580)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBC12C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBC1130)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC07C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1DBC0A80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1DBC0AE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBC0DB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBC0E10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC1560)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBC0880)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC0820)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int EnumValue_TypeDefinitionIndex = 5445;

	class EnumValue : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::EnumValue*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::EnumValue*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValue_TypeDefinitionIndex)->GetStaticField(0x18FF0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__repeated_options_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValue_TypeDefinitionIndex)->GetStaticField(0x18FF8);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Option*>* options_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* name_; // 0x20
		::System::Int32 number_; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::EnumValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::EnumValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NAME_OFFSET))(this, a1);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_SET_NUMBER_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::EnumValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::EnumValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::EnumValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::EnumValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUMVALUE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
