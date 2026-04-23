#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WellKnownTypes/Field_Types_Cardinality.h"
#include "unitysdk/Google/Protobuf/WellKnownTypes/Field_Types_Kind.h"
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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1712D730)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CLONE_OFFSET UNITYSDK_OFFSET(0x1712CB60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1712CF70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1712CF10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1712D100)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_CARDINALITY_OFFSET UNITYSDK_OFFSET(0x1712CBD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1712CE60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1712C720)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1712CDB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1712CBB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1712CC10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1712CBF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1712CD70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x1712CD90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1712C6C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x1712CCC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1712E1A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1712DE60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1712C8A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_CARDINALITY_OFFSET UNITYSDK_OFFSET(0x1712CBE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1712CE70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1712CDC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_KIND_OFFSET UNITYSDK_OFFSET(0x1712CBC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1712CC20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1712CC00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1712CD80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_PACKED_OFFSET UNITYSDK_OFFSET(0x1712CDA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x1712CCD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1712D410)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1712D470)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1712E5E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1712C980)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1712C900)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Field_TypeDefinitionIndex = 6242;

	class Field : public ::System::Object
	{
	public:
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__repeated_options_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(Field_TypeDefinitionIndex)->GetStaticField(0x4EA0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Field*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Field*>**)Il2CppClass::FromTypeDefinitionIndex(Field_TypeDefinitionIndex)->GetStaticField(0x4EA8);
		}
		::System::String* defaultValue_; // 0x10
		::System::String* name_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Option*>* options_; // 0x20
		::System::String* jsonName_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::System::String* typeUrl_; // 0x38
		::System::Boolean packed_; // 0x40
		::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality cardinality_; // 0x44
		::Google::Protobuf::WellKnownTypes::Field_Types_Kind kind_; // 0x48
		::System::Int32 number_; // 0x4C
		::System::Int32 oneofIndex_; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Field* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Field*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Field*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Field* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Field*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Field_Types_Kind get_Kind()
		{
			return ((::Google::Protobuf::WellKnownTypes::Field_Types_Kind(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_KIND_OFFSET))(this);
		}

		::System::Void set_Kind(::Google::Protobuf::WellKnownTypes::Field_Types_Kind value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field_Types_Kind))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_KIND_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality get_Cardinality()
		{
			return ((::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_CARDINALITY_OFFSET))(this);
		}

		::System::Void set_Cardinality(::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_CARDINALITY_OFFSET))(this, value);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NUMBER_OFFSET))(this, value);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_TypeUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_TYPEURL_OFFSET))(this);
		}

		::System::Void set_TypeUrl(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_TYPEURL_OFFSET))(this, value);
		}

		::System::Int32 get_OneofIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_ONEOFINDEX_OFFSET))(this);
		}

		::System::Void set_OneofIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_ONEOFINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_Packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PACKED_OFFSET))(this);
		}

		::System::Void set_Packed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_PACKED_OFFSET))(this, value);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_JSONNAME_OFFSET))(this);
		}

		::System::Void set_JsonName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_JSONNAME_OFFSET))(this, value);
		}

		::System::String* get_DefaultValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_DEFAULTVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Field* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Field* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
