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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B3AA080)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CLONE_OFFSET UNITYSDK_OFFSET(0x1B3A94C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B3A9790)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B3A9730)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B3A98F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_CARDINALITY_OFFSET UNITYSDK_OFFSET(0x1B3A9530)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B3A96D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3A9030)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1B3A9670)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1B3A9510)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B3A9570)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1B3A9550)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1B3A9630)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PACKED_OFFSET UNITYSDK_OFFSET(0x1B3A9650)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B3A8FD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x1B3A95D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B3AA6F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B3AA4E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B3A9210)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_CARDINALITY_OFFSET UNITYSDK_OFFSET(0x1B3A9540)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_DEFAULTVALUE_OFFSET UNITYSDK_OFFSET(0x1B3A96E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_JSONNAME_OFFSET UNITYSDK_OFFSET(0x1B3A9680)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_KIND_OFFSET UNITYSDK_OFFSET(0x1B3A9520)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1B3A9580)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1B3A9560)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_ONEOFINDEX_OFFSET UNITYSDK_OFFSET(0x1B3A9640)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_PACKED_OFFSET UNITYSDK_OFFSET(0x1B3A9660)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x1B3A95E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B3A9B70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B3A9BD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3AA9A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B3A92F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3A9270)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Field_TypeDefinitionIndex = 5438;

	class Field : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Field*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Field*>**)Il2CppClass::FromTypeDefinitionIndex(Field_TypeDefinitionIndex)->GetStaticField(0x168F0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__repeated_options_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(Field_TypeDefinitionIndex)->GetStaticField(0x168F8);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Option*>* options_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* jsonName_; // 0x20
		::System::String* defaultValue_; // 0x28
		::System::String* typeUrl_; // 0x30
		::System::String* name_; // 0x38
		::System::Boolean packed_; // 0x40
		::Google::Protobuf::WellKnownTypes::Field_Types_Kind kind_; // 0x44
		::System::Int32 number_; // 0x48
		::System::Int32 oneofIndex_; // 0x4C
		::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality cardinality_; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Field* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_Kind(::Google::Protobuf::WellKnownTypes::Field_Types_Kind a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field_Types_Kind))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_KIND_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality get_Cardinality()
		{
			return ((::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_CARDINALITY_OFFSET))(this);
		}

		::System::Void set_Cardinality(::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field_Types_Cardinality))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_CARDINALITY_OFFSET))(this, a1);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NUMBER_OFFSET))(this, a1);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_TypeUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_TYPEURL_OFFSET))(this);
		}

		::System::Void set_TypeUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_TYPEURL_OFFSET))(this, a1);
		}

		::System::Int32 get_OneofIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_ONEOFINDEX_OFFSET))(this);
		}

		::System::Void set_OneofIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_ONEOFINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_Packed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_PACKED_OFFSET))(this);
		}

		::System::Void set_Packed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_PACKED_OFFSET))(this, a1);
		}

		::System::String* get_JsonName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_JSONNAME_OFFSET))(this);
		}

		::System::Void set_JsonName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_JSONNAME_OFFSET))(this, a1);
		}

		::System::String* get_DefaultValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GET_DEFAULTVALUE_OFFSET))(this);
		}

		::System::Void set_DefaultValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_SET_DEFAULTVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Field* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Field* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Field*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_FIELD_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
