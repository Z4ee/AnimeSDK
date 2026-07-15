#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::WellKnownTypes { class Any; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1BDDE970)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x1BDDE150)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BDDE400)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BDDE220)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BDDE5B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDDDDA0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1BDDE1A0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1BDDDD40)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BDDE200)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1BDDEBD0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1BDDEA10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BDDDF80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1BDDE1B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BDDE210)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BDDE820)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x1BDDE880)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BDDEE10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BDDDFF0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDDDFE0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Option_TypeDefinitionIndex = 5458;

	class Option : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(Option_TypeDefinitionIndex)->GetStaticField(0x3A220);
		}
		::Google::Protobuf::WellKnownTypes::Any* value_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* name_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Option* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Option*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Option*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Option*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::WellKnownTypes::Option* Clone()
		{
			return ((::Google::Protobuf::WellKnownTypes::Option*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_NAME_OFFSET))(this, a1);
		}

		::Google::Protobuf::WellKnownTypes::Any* get_Value()
		{
			return ((::Google::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Google::Protobuf::WellKnownTypes::Any* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_VALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Option* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Option*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Option* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Option*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
