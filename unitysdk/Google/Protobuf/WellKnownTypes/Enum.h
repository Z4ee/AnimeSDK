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
namespace Google::Protobuf::WellKnownTypes { class EnumValue; }
namespace Google::Protobuf::WellKnownTypes { class Option; }
namespace Google::Protobuf::WellKnownTypes { class SourceContext; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B3A7290)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_CLONE_OFFSET UNITYSDK_OFFSET(0x1B3A6A90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B3A6BE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3A6B80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3A6D80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3A6550)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B3A6AE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B3A64F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_SOURCECONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3A6B40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1B3A6B60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B3A77D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B3A74B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3A6730)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B3A6AF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_SET_SOURCECONTEXT_OFFSET UNITYSDK_OFFSET(0x1B3A6B50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_SET_SYNTAX_OFFSET UNITYSDK_OFFSET(0x1B3A6B70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3A7010)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B3A7070)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3A7990)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3A6810)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A6790)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Enum_TypeDefinitionIndex = 5443;

	class Enum : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::EnumValue*>** StaticGet__repeated_enumvalue_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::EnumValue*>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x168A0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__repeated_options_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x168A8);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Enum*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Enum*>**)Il2CppClass::FromTypeDefinitionIndex(Enum_TypeDefinitionIndex)->GetStaticField(0x168B0);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::EnumValue*>* enumvalue_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Option*>* options_; // 0x20
		::Google::Protobuf::WellKnownTypes::SourceContext* sourceContext_; // 0x28
		::System::String* name_; // 0x30
		::Google::Protobuf::WellKnownTypes::Syntax syntax_; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Enum* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Enum*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Enum*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Enum*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Enum* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Enum*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_SET_NAME_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::SourceContext* get_SourceContext()
		{
			return ((::Google::Protobuf::WellKnownTypes::SourceContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_SOURCECONTEXT_OFFSET))(this);
		}

		::System::Void set_SourceContext(::Google::Protobuf::WellKnownTypes::SourceContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::SourceContext*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_SET_SOURCECONTEXT_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::Syntax get_Syntax()
		{
			return ((::Google::Protobuf::WellKnownTypes::Syntax(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GET_SYNTAX_OFFSET))(this);
		}

		::System::Void set_Syntax(::Google::Protobuf::WellKnownTypes::Syntax a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Syntax))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_SET_SYNTAX_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Enum* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Enum*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Enum* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Enum*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ENUM_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
