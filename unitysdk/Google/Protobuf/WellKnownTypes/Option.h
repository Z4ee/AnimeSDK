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

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17131640)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x17130FE0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17131200)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x17131100)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171312D0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17130C90)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17131030)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17130C30)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x171310E0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17131990)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17131790)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17130E10)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17131040)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x171310F0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17131550)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x171315B0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x17131B20)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17130E80)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x17130E70)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int Option_TypeDefinitionIndex = 6251;

	class Option : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Option*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::WellKnownTypes::Option*>**)Il2CppClass::FromTypeDefinitionIndex(Option_TypeDefinitionIndex)->GetStaticField(0x5150);
		}
		::Google::Protobuf::WellKnownTypes::Any* value_; // 0x10
		::System::String* name_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::WellKnownTypes::Option* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Option*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_NAME_OFFSET))(this, value);
		}

		::Google::Protobuf::WellKnownTypes::Any* get_Value()
		{
			return ((::Google::Protobuf::WellKnownTypes::Any*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::Google::Protobuf::WellKnownTypes::Any* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Any*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_SET_VALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::WellKnownTypes::Option* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Option*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::WellKnownTypes::Option* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::WellKnownTypes::Option*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_OPTION_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
