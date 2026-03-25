#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class ByteString; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class UninterpretedOption_Types_NamePart; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15DC16B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x15DC0C90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15DC1030)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x15DC0FD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15DC1140)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_AGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0F20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DC0930)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_IDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0D60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_NEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15DA7E20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_POSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15DC1A60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15DC0AB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_AGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0F30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_IDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0D70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_NEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_POSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15DC0E80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15DC1410)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x15DC1470)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15DC1DB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15DC0BF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC0B10)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_TypeDefinitionIndex = 28092;

	class UninterpretedOption : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__repeated_name_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x22860);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x22868);
		}
		::System::String* aggregateValue_; // 0x10
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>* name_; // 0x18
		::System::String* identifierValue_; // 0x20
		::MiHoYo::SDK::Protobuf::ByteString* stringValue_; // 0x28
		::System::UInt64 positiveIntValue_; // 0x30
		::System::Double doubleValue_; // 0x38
		::System::Int64 negativeIntValue_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CLONE_OFFSET))(this);
		}

		::System::String* get_IdentifierValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_IDENTIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_IdentifierValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_IDENTIFIERVALUE_OFFSET))(this, value);
		}

		::System::UInt64 get_PositiveIntValue()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_POSITIVEINTVALUE_OFFSET))(this);
		}

		::System::Void set_PositiveIntValue(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_POSITIVEINTVALUE_OFFSET))(this, value);
		}

		::System::Int64 get_NegativeIntValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_NEGATIVEINTVALUE_OFFSET))(this);
		}

		::System::Void set_NegativeIntValue(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_NEGATIVEINTVALUE_OFFSET))(this, value);
		}

		::System::Double get_DoubleValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DOUBLEVALUE_OFFSET))(this);
		}

		::System::Void set_DoubleValue(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_DOUBLEVALUE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::ByteString* get_StringValue()
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::MiHoYo::SDK::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_STRINGVALUE_OFFSET))(this, value);
		}

		::System::String* get_AggregateValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_AGGREGATEVALUE_OFFSET))(this);
		}

		::System::Void set_AggregateValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_AGGREGATEVALUE_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_OFFSET))(this, input);
		}
	};
}
