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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17139CB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x17138D20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17138DE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17138D80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171393A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x17138B60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17138150)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET UNITYSDK_OFFSET(0x17138D70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x17138CA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x171388E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x171389D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x171380F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x17138A80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x17138C20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1713A7B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1713A060)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x171382D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x17138BF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x17138D00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x17138980)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17138A50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x17138AC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x17138C80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x171398C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17139920)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1713AB70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17138340)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17138330)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value_TypeDefinitionIndex = 6230;

	class Value : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(Value_TypeDefinitionIndex)->GetStaticField(0x5600);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Object* kind_; // 0x18
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
