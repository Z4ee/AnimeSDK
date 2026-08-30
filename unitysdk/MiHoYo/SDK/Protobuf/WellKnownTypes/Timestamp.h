#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B71CFA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1B71CD00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B71CE10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B71CDA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B71CE40)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B71CA20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x1B71CD80)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B71C9C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1B71CD60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1B71D340)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B71D1E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B71CC60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x1B71CD90)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1B71CD70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1B71D780)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET UNITYSDK_OFFSET(0x1B71D370)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B71CE60)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B71CEC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B71D7E0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B71CCD0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B71CCC0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp_TypeDefinitionIndex = 35086;

	class Timestamp : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*>**)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0xCB0);
		}
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0x6F0);
		}
		::System::Int32 nanos_; // 0x10
		::System::Int64 seconds_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET))(this);
		}

		::System::Int64 get_Seconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET))(this);
		}

		::System::Void set_Seconds(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET))(this, a1);
		}

		::System::Int32 get_Nanos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET))(this);
		}

		::System::Void set_Nanos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET))(this, a1);
		}

		static ::System::Boolean IsNormalized(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET))(a1, a2);
		}

		static ::System::String* ToJson(::System::Int64 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET))(a1, a2, a3);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET))(this);
		}
	};
}
