#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class Value; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DBC5510)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DBC50A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DBC5270)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DBC50F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DBC5390)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC4C90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DBC4C30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DBC5710)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DBC55B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DBC4E70)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DBC5400)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DBC5460)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DBC58D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DBC4F20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC4ED0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int ListValue_TypeDefinitionIndex = 5429;

	class ListValue : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>**)Il2CppClass::FromTypeDefinitionIndex(ListValue_TypeDefinitionIndex)->GetStaticField(0x19060);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Value*>** StaticGet__repeated_values_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::WellKnownTypes::Value*>**)Il2CppClass::FromTypeDefinitionIndex(ListValue_TypeDefinitionIndex)->GetStaticField(0x19068);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::WellKnownTypes::Value*>* values_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::ListValue*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::ListValue* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::ListValue*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::ListValue* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::ListValue*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_LISTVALUE_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
