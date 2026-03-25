#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WellKnownTypes/Syntax.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class Field; }
namespace Google::Protobuf::WellKnownTypes { class Option; }
namespace Google::Protobuf::WellKnownTypes { class SourceContext; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B38260)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_CLONE_OFFSET UNITYSDK_OFFSET(0x15B379B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B37B20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B37AC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B37CB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B37550)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x15B37A00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B374F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_SOURCECONTEXT_OFFSET UNITYSDK_OFFSET(0x15B37A80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x15B37AA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B387F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B38560)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B376D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_SET_NAME_OFFSET UNITYSDK_OFFSET(0x15B37A10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_SET_SOURCECONTEXT_OFFSET UNITYSDK_OFFSET(0x15B37A90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_SET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x15B37AB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B38050)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B380B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B38A50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B377D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B37730)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Type_TypeDefinitionIndex = 6230;

	class Type : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet__repeated_oneofs_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0xEDB0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Type*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Type*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0xEDB8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Field*>** StaticGet__repeated_fields_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Field*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0xEDC0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__repeated_options_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(Type_TypeDefinitionIndex)->GetStaticField(0xEDC8);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Field*>* fields_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Option*>* options_; // 0x18
		::System::String* name_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* oneofs_; // 0x30
		::Google::Protobuf::WellKnownTypes::SourceContext* sourceContext_; // 0x38
		::Google::Protobuf::WellKnownTypes::Syntax syntax_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Type* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Type*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Type*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Type* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_SET_NAME_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::SourceContext* get_SourceContext()
		{
			return ((::Google::Protobuf::WellKnownTypes::SourceContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_SOURCECONTEXT_OFFSET))(this);
		}

		::System::Void set_SourceContext(::Google::Protobuf::WellKnownTypes::SourceContext* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::SourceContext*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_SET_SOURCECONTEXT_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::Syntax get_Syntax()
		{
			return ((::Google::Protobuf::WellKnownTypes::Syntax(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GET_SYNTAX_OFFSET))(this);
		}

		::System::Void set_Syntax(::Google::Protobuf::WellKnownTypes::Syntax value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Syntax))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_SET_SYNTAX_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Type* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Type* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Type*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
