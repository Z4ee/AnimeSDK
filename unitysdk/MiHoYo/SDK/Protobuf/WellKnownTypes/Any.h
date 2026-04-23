#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173C0A50)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CLONE_OFFSET UNITYSDK_OFFSET(0x173C03D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173C0730)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET UNITYSDK_OFFSET(0x173C0630)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173C07D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x173C0CC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C0020)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x173BFFC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x173C04D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x173C0580)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173C0B20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173C0200)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x173C04E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x173C0590)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173C0910)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET UNITYSDK_OFFSET(0x173C0970)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CCTOR_OFFSET UNITYSDK_OFFSET(0x173C0D10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173C0310)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET UNITYSDK_OFFSET(0x173C0260)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any_TypeDefinitionIndex = 33648;

	class Any : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*>**)Il2CppClass::FromTypeDefinitionIndex(Any_TypeDefinitionIndex)->GetStaticField(0xD90);
		}
		::MiHoYo::SDK::Protobuf::ByteString* value_; // 0x10
		::System::String* typeUrl_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_TypeUrl(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::ByteString* get_Value()
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::MiHoYo::SDK::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Any* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET))(this, input);
		}

		static ::System::String* GetTypeName(::System::String* typeUrl)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET))(typeUrl);
		}
	};
}
