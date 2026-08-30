#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EF82240)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CLONE_OFFSET UNITYSDK_OFFSET(0x1EF81B60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EF81EC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EF81DC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EF81F60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x1EF825A0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EF81750)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1EF816F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x1EF81C60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF81D10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EF82310)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EF81990)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x1EF81C70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EF81D20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EF820A0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EF82100)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EF825F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF81AA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF819F0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any_TypeDefinitionIndex = 35068;

	class Any : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*>**)Il2CppClass::FromTypeDefinitionIndex(Any_TypeDefinitionIndex)->GetStaticField(0xBD0);
		}
		::System::String* typeUrl_; // 0x10
		::MiHoYo::SDK::Protobuf::ByteString* value_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CLONE_OFFSET))(this);
		}

		::System::String* get_TypeUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_TYPEURL_OFFSET))(this);
		}

		::System::Void set_TypeUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::ByteString* get_Value()
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::MiHoYo::SDK::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET))(this, a1);
		}

		static ::System::String* GetTypeName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET))(a1);
		}
	};
}
