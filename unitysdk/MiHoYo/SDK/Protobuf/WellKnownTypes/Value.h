#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/WellKnownTypes/NullValue.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/WellKnownTypes/Value_KindOneofCase.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class ListValue; }
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Struct; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9F7670)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9F6890)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9F6940)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9F68E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9F6E30)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6680)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9F5C80)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET UNITYSDK_OFFSET(0x1F9F63B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6810)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F63C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F64C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F9F5C20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6570)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6790)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9F7A60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9F5E00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6740)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6870)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6470)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F6540)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F65E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET UNITYSDK_OFFSET(0x1F9F67F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9F7260)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9F72C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F7F20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9F5E70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F5E60)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Value_TypeDefinitionIndex = 29090;

	class Value : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(Value_TypeDefinitionIndex)->GetStaticField(0x24960);
		}
		::System::Object* kind_; // 0x10
		::MiHoYo::SDK::Protobuf::WellKnownTypes::Value_KindOneofCase kindCase_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Value* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Value* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_CLONE_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::NullValue get_NullValue()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::NullValue(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NULLVALUE_OFFSET))(this);
		}

		::System::Void set_NullValue(::MiHoYo::SDK::Protobuf::WellKnownTypes::NullValue value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::NullValue))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NULLVALUE_OFFSET))(this, value);
		}

		::System::Double get_NumberValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_NUMBERVALUE_OFFSET))(this);
		}

		::System::Void set_NumberValue(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_NUMBERVALUE_OFFSET))(this, value);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRINGVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_BOOLVALUE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* get_StructValue()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_STRUCTVALUE_OFFSET))(this);
		}

		::System::Void set_StructValue(::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Struct*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_STRUCTVALUE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* get_ListValue()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_LISTVALUE_OFFSET))(this);
		}

		::System::Void set_ListValue(::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_SET_LISTVALUE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Value_KindOneofCase get_KindCase()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Value_KindOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GET_KINDCASE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Value* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_VALUE_MERGEFROM_OFFSET))(this, input);
		}
	};
}
