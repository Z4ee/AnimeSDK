#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_APPENDNANOSECONDS_OFFSET UNITYSDK_OFFSET(0x17E88FA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E887D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_CLONE_OFFSET UNITYSDK_OFFSET(0x17E88510)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E88640)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E885A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E886A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E88230)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x17E88580)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E881D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x17E88560)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x17E88BC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E88A40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E88950)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E883B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x17E88590)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x17E88570)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x17E89150)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_TOJSON_OFFSET UNITYSDK_OFFSET(0x17E88C20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E886E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E88740)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E891B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E88420)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_OFFSET UNITYSDK_OFFSET(0x17E88410)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Duration_TypeDefinitionIndex = 5420;

	class Duration : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Duration*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Duration*>**)Il2CppClass::FromTypeDefinitionIndex(Duration_TypeDefinitionIndex)->GetStaticField(0x428D0);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 nanos_; // 0x18
		::System::Int64 seconds_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Duration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Duration*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Duration*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Duration*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Duration* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Duration*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_CLONE_OFFSET))(this);
		}

		::System::Int64 get_Seconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_SECONDS_OFFSET))(this);
		}

		::System::Void set_Seconds(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_SECONDS_OFFSET))(this, a1);
		}

		::System::Int32 get_Nanos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GET_NANOS_OFFSET))(this);
		}

		::System::Void set_Nanos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_SET_NANOS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Duration* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Duration*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Duration* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Duration*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_MERGEFROM_1_OFFSET))(this, a1);
		}

		static ::System::Boolean IsNormalized(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_ISNORMALIZED_OFFSET))(a1, a2);
		}

		static ::System::String* ToJson(::System::Int64 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_TOJSON_OFFSET))(a1, a2, a3);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_TODIAGNOSTICSTRING_OFFSET))(this);
		}

		static ::System::Void AppendNanoseconds(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_DURATION_APPENDNANOSECONDS_OFFSET))(a1, a2);
		}
	};
}
