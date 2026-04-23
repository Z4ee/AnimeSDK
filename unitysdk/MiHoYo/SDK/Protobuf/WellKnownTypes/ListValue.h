#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::WellKnownTypes { class Value; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173C3CF0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x173C39C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173C3AC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x173C3A10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173C3B30)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C3690)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x173C3630)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x173C3E10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173C3D80)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C3870)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173C3C00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x173C3C60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C3ED0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173C3920)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x173C38D0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue_TypeDefinitionIndex = 33663;

	class ListValue : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*>**)Il2CppClass::FromTypeDefinitionIndex(ListValue_TypeDefinitionIndex)->GetStaticField(0xE20);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>** StaticGet__repeated_values_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(ListValue_TypeDefinitionIndex)->GetStaticField(0xE28);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Value*>* values_; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
