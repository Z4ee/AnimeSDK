#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E876F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CLONE_OFFSET UNITYSDK_OFFSET(0x17E87150)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E87360)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E87260)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E87420)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x17E87BC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E86DC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E86D60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x17E871A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x17E87200)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E879D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E878C0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E86F40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x17E871B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x17E87210)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E875D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E87630)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E87C60)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E87000)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET UNITYSDK_OFFSET(0x17E86FA0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any_TypeDefinitionIndex = 5417;

	class Any : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Any*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Any*>**)Il2CppClass::FromTypeDefinitionIndex(Any_TypeDefinitionIndex)->GetStaticField(0x42850);
		}
		::System::String* typeUrl_; // 0x10
		::Google::Protobuf::ByteString* value_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Any* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Any*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Any*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Any* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CLONE_OFFSET))(this);
		}

		::System::String* get_TypeUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_TYPEURL_OFFSET))(this);
		}

		::System::Void set_TypeUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* get_Value()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Any* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Any* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_1_OFFSET))(this, a1);
		}

		static ::System::String* GetTypeName(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET))(a1);
		}
	};
}
