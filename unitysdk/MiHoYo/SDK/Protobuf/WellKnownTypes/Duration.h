#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_APPENDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x15DC4670)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15DC3FC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_CLONE_OFFSET UNITYSDK_OFFSET(0x15DC3D80)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15DC3E90)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x15DC3E20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15DC3EC0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DC3B00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x15DC3E00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15DC3AA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x15DC3DE0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x15DC4270)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15DC4200)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DC3CE0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x15DC3E10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x15DC3DF0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x15DC47B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TOJSON_OFFSET UNITYSDK_OFFSET(0x15DC42D0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DC3EE0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x15DC3F40)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC4810)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DC3D50)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC3D40)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration_TypeDefinitionIndex = 28027;

	class Duration : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*>**)Il2CppClass::FromTypeDefinitionIndex(Duration_TypeDefinitionIndex)->GetStaticField(0x970);
		}
		::System::Int32 nanos_; // 0x10
		::System::Int64 seconds_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_CLONE_OFFSET))(this);
		}

		::System::Int64 get_Seconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_SECONDS_OFFSET))(this);
		}

		::System::Void set_Seconds(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_SECONDS_OFFSET))(this, value);
		}

		::System::Int32 get_Nanos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_NANOS_OFFSET))(this);
		}

		::System::Void set_Nanos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_NANOS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_OFFSET))(this, input);
		}

		static ::System::Boolean IsNormalized(::System::Int64 seconds, ::System::Int32 nanoseconds)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_ISNORMALIZED_OFFSET))(seconds, nanoseconds);
		}

		static ::System::String* ToJson(::System::Int64 seconds, ::System::Int32 nanoseconds, ::System::Boolean diagnosticOnly)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TOJSON_OFFSET))(seconds, nanoseconds, diagnosticOnly);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TODIAGNOSTICSTRING_OFFSET))(this);
		}

		static ::System::Void AppendNanoseconds(::System::Text::StringBuilder* builder, ::System::Int32 nanos)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_APPENDNANOSECONDS_OFFSET))(builder, nanos);
		}
	};
}
