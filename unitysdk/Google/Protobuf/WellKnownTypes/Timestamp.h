#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBC9BE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBC97E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1DBCA480)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBC9980)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBC9870)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBC9A50)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC94A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET UNITYSDK_OFFSET(0x1DBC9850)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DBC9440)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1DBC9830)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET UNITYSDK_OFFSET(0x1DBCA110)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBC9F90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBC9D60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DBC9EB0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC9680)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET UNITYSDK_OFFSET(0x1DBC9860)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET UNITYSDK_OFFSET(0x1DBC9840)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET UNITYSDK_OFFSET(0x1DBCA510)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET UNITYSDK_OFFSET(0x1DBCA140)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBC9A90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBC9AF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBCA570)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBC96F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC96E0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Timestamp_TypeDefinitionIndex = 5432;

	class Timestamp : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>**)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0x19100);
		}
		static ::System::DateTime* StaticGet_UnixEpoch()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(Timestamp_TypeDefinitionIndex)->GetStaticField(0x8F50);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int32 nanos_; // 0x18
		::System::Int64 seconds_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Timestamp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Timestamp*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Timestamp* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Timestamp*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CLONE_OFFSET))(this);
		}

		::System::Int64 get_Seconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_SECONDS_OFFSET))(this);
		}

		::System::Void set_Seconds(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_SECONDS_OFFSET))(this, a1);
		}

		::System::Int32 get_Nanos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GET_NANOS_OFFSET))(this);
		}

		::System::Void set_Nanos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_SET_NANOS_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Timestamp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Timestamp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_MERGEFROM_1_OFFSET))(this, a1);
		}

		static ::System::Boolean IsNormalized(::System::Int64 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_ISNORMALIZED_OFFSET))(a1, a2);
		}

		static ::System::String* ToJson(::System::Int64 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::String*(*)(::System::Int64, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TOJSON_OFFSET))(a1, a2, a3);
		}

		::System::Int32 CompareTo(::Google::Protobuf::WellKnownTypes::Timestamp* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_COMPARETO_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Equality(::Google::Protobuf::WellKnownTypes::Timestamp* a1, ::Google::Protobuf::WellKnownTypes::Timestamp* a2)
		{
			return ((::System::Boolean(*)(::Google::Protobuf::WellKnownTypes::Timestamp*, ::Google::Protobuf::WellKnownTypes::Timestamp*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_OP_EQUALITY_OFFSET))(a1, a2);
		}

		::System::String* ToDiagnosticString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TIMESTAMP_TODIAGNOSTICSTRING_OFFSET))(this);
		}
	};
}
