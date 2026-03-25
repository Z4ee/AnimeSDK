#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Google/Protobuf/WellKnownTypes/NullValue.h"
#include "unitysdk/Google/Protobuf/WellKnownTypes/Value_KindOneofCase.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class ListValue; }
namespace Google::Protobuf::WellKnownTypes { class Struct; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B3BCB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x15B3AD20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B3ADE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B3AD80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B3B3A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AB60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B3A190)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET UNITYSDK_OFFSET(0x15B3AD70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x15B3ACA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x15B3A900)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x15B3A9F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B3A130)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AAA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AC20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B3C790)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B3C060)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B3A310)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x15B3ABF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AD00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x15B3A9A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AA70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AAE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x15B3AC80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B3B8C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B3B920)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B3CB20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B3A380)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3A370)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value_TypeDefinitionIndex = 6220;

	class Value : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(Value_TypeDefinitionIndex)->GetStaticField(0xEE40);
		}
		::System::Object* kind_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::WellKnownTypes::Value_KindOneofCase kindCase_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Value* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Value* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::NullValue get_NullValue()
		{
			return ((::Google::Protobuf::WellKnownTypes::NullValue(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NULLVALUE_OFFSET))(this);
		}

		::System::Void set_NullValue(::Google::Protobuf::WellKnownTypes::NullValue value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::NullValue))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET))(this, value);
		}

		::System::Double get_NumberValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET))(this);
		}

		::System::Void set_NumberValue(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET))(this, value);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::Struct* get_StructValue()
		{
			return ((::Google::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET))(this);
		}

		::System::Void set_StructValue(::Google::Protobuf::WellKnownTypes::Struct* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* get_ListValue()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET))(this);
		}

		::System::Void set_ListValue(::Google::Protobuf::WellKnownTypes::ListValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::Value_KindOneofCase get_KindCase()
		{
			return ((::Google::Protobuf::WellKnownTypes::Value_KindOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Value* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Value* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
