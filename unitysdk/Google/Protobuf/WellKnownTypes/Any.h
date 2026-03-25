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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B2A100)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CLONE_OFFSET UNITYSDK_OFFSET(0x15B29AA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B29D40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B29C20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B29E20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET UNITYSDK_OFFSET(0x15B2A5D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B29710)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B296B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x15B29AF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x15B29B70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B2A460)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B2A2D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B29890)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET UNITYSDK_OFFSET(0x15B29B00)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x15B29B80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B29FE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B2A040)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B2A6A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B29950)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET UNITYSDK_OFFSET(0x15B298F0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Any_TypeDefinitionIndex = 6205;

	class Any : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Any*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Any*>**)Il2CppClass::FromTypeDefinitionIndex(Any_TypeDefinitionIndex)->GetStaticField(0xE8A0);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* typeUrl_; // 0x18
		::Google::Protobuf::ByteString* value_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Any* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_TypeUrl(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_TYPEURL_OFFSET))(this, value);
		}

		::Google::Protobuf::ByteString* get_Value()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Google::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Any* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Any* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_MERGEFROM_1_OFFSET))(this, input);
		}

		static ::System::String* GetTypeName(::System::String* typeUrl)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANY_GETTYPENAME_OFFSET))(typeUrl);
		}
	};
}
