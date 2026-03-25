#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15DC8270)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET UNITYSDK_OFFSET(0x15DC8030)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15DC8140)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x15DC80D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15DC8170)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DC7DB0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x15DC80B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15DC7D50)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x15DC8090)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x15DC8520)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15DC84B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DC7F90)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x15DC80C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x15DC80A0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x15DC8920)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET UNITYSDK_OFFSET(0x15DC8550)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DC8190)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x15DC81F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC8980)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DC8000)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC7FF0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp_TypeDefinitionIndex = 28042;

	class Timestamp : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*>**)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0xA20);
		}
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0x590);
		}
		::System::Int32 nanos_; // 0x10
		::System::Int64 seconds_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_Seconds(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET))(this, value);
		}

		::System::Int32 get_Nanos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET))(this);
		}

		::System::Void set_Nanos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET))(this, input);
		}

		static ::System::Boolean IsNormalized(::System::Int64 seconds, ::System::Int32 nanoseconds)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET))(seconds, nanoseconds);
		}

		static ::System::String* ToJson(::System::Int64 seconds, ::System::Int32 nanoseconds, ::System::Boolean diagnosticOnly)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET))(seconds, nanoseconds, diagnosticOnly);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET))(this);
		}
	};
}
