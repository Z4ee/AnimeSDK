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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E99000)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x17E98070)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E98130)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E980D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E986F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x17E97EB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E97550)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET UNITYSDK_OFFSET(0x17E980C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x17E97FF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x17E97C80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17E97D70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E974F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x17E97E20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x17E97F70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E99AA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E993B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E976D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x17E97F40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x17E98050)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x17E97D20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x17E97DF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x17E97E60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x17E97FD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E98C10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E98C70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E99DF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E97740)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x17E97730)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value_TypeDefinitionIndex = 5432;

	class Value : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(Value_TypeDefinitionIndex)->GetStaticField(0x432F0);
		}
		::System::Object* kind_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::WellKnownTypes::Value_KindOneofCase kindCase_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Value* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_NullValue(::Google::Protobuf::WellKnownTypes::NullValue a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::NullValue))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET))(this, a1);
		}

		::System::Double get_NumberValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET))(this);
		}

		::System::Void set_NumberValue(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET))(this, a1);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET))(this, a1);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::Struct* get_StructValue()
		{
			return ((::Google::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET))(this);
		}

		::System::Void set_StructValue(::Google::Protobuf::WellKnownTypes::Struct* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* get_ListValue()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET))(this);
		}

		::System::Void set_ListValue(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::Value_KindOneofCase get_KindCase()
		{
			return ((::Google::Protobuf::WellKnownTypes::Value_KindOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Value* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Value* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
