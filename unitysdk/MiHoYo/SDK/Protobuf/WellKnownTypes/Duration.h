#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_APPENDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x1E68D2A0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E68CAF0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_CLONE_OFFSET UNITYSDK_OFFSET(0x1E68C8B0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E68C9C0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E68C950)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E68C9F0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68C690)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x1E68C930)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E68C630)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1E68C910)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1E68CDA0)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E68CD30)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E68C810)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x1E68C940)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1E68C920)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1E68D420)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TOJSON_OFFSET UNITYSDK_OFFSET(0x1E68CE00)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E68CA10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E68CA70)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E68D480)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E68C880)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1E68C870)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration_TypeDefinitionIndex = 28477;

	class Duration : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::WellKnownTypes::Duration*>**)Il2CppClass::FromTypeDefinitionIndex(Duration_TypeDefinitionIndex)->GetStaticField(0x230E0);
		}
		::System::Int64 seconds_; // 0x10
		::System::Int32 nanos_; // 0x18

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
