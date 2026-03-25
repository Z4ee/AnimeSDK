#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class UninterpretedOption_Types_NamePart; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x15B25090)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x15B23B70)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x15B240E0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x15B24080)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x15B245C0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_AGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x15B23F90)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B23790)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x15B23DB0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASAGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x15B24070)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASDOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x15B23E20)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASIDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x15B23CA0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASNEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15B23DA0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASPOSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15B23D20)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASSTRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15B23F40)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_IDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x15B23BC0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_NEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15B23D30)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x15B23730)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_POSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15B23CB0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15B23E30)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x15B25CF0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x15B25750)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x15B23910)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_AGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x15B24000)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x15B23E10)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_IDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x15B23C30)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_NEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15B23D90)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_POSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x15B23D10)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x15B23EA0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15B24C00)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x15B24C60)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x15B25FE0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x15B239C0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x15B23970)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_TypeDefinitionIndex = 6298;

	class UninterpretedOption : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0xD590);
		}
		static ::System::String** StaticGet_IdentifierValueDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0xD598);
		}
		static ::Google::Protobuf::ByteString** StaticGet_StringValueDefaultValue()
		{
			return (::Google::Protobuf::ByteString**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0xD5A0);
		}
		static ::System::String** StaticGet_AggregateValueDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0xD5A8);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__repeated_name_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0xD5B0);
		}
		static ::System::UInt64* StaticGet_PositiveIntValueDefaultValue()
		{
			return (::System::UInt64*)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x4B60);
		}
		static ::System::Double* StaticGet_DoubleValueDefaultValue()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x4B68);
		}
		static ::System::Int64* StaticGet_NegativeIntValueDefaultValue()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x4B70);
		}
		::System::String* aggregateValue_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>* name_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::ByteString* stringValue_; // 0x28
		::System::String* identifierValue_; // 0x30
		::System::Double doubleValue_; // 0x38
		::System::Int32 _hasBits0; // 0x40
		::System::UInt64 positiveIntValue_; // 0x48
		::System::Int64 negativeIntValue_; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::UninterpretedOption* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::UninterpretedOption* Clone()
		{
			return ((::Google::Protobuf::Reflection::UninterpretedOption*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CLONE_OFFSET))(this);
		}

		::System::String* get_IdentifierValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_IDENTIFIERVALUE_OFFSET))(this);
		}

		::System::Void set_IdentifierValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_IDENTIFIERVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasIdentifierValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASIDENTIFIERVALUE_OFFSET))(this);
		}

		::System::UInt64 get_PositiveIntValue()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_POSITIVEINTVALUE_OFFSET))(this);
		}

		::System::Void set_PositiveIntValue(::System::UInt64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_POSITIVEINTVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasPositiveIntValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASPOSITIVEINTVALUE_OFFSET))(this);
		}

		::System::Int64 get_NegativeIntValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_NEGATIVEINTVALUE_OFFSET))(this);
		}

		::System::Void set_NegativeIntValue(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_NEGATIVEINTVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasNegativeIntValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASNEGATIVEINTVALUE_OFFSET))(this);
		}

		::System::Double get_DoubleValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DOUBLEVALUE_OFFSET))(this);
		}

		::System::Void set_DoubleValue(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_DOUBLEVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasDoubleValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASDOUBLEVALUE_OFFSET))(this);
		}

		::Google::Protobuf::ByteString* get_StringValue()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::Google::Protobuf::ByteString* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_STRINGVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasStringValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASSTRINGVALUE_OFFSET))(this);
		}

		::System::String* get_AggregateValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_AGGREGATEVALUE_OFFSET))(this);
		}

		::System::Void set_AggregateValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_AGGREGATEVALUE_OFFSET))(this, value);
		}

		::System::Boolean get_HasAggregateValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_HASAGGREGATEVALUE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::UninterpretedOption* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::UninterpretedOption* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
