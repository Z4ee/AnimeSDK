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

#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181C9150)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CLONE_OFFSET UNITYSDK_OFFSET(0x181C8740)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181C8AD0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_OFFSET UNITYSDK_OFFSET(0x181C8A70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181C8BE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_AGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x181C89C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C83F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x181C88F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_IDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x181C8800)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_NEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x181C88D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x181AE880)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_POSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x181C88B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x181C8910)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C9500)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C8570)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_AGGREGATEVALUE_OFFSET UNITYSDK_OFFSET(0x181C89D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_DOUBLEVALUE_OFFSET UNITYSDK_OFFSET(0x181C8900)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_IDENTIFIERVALUE_OFFSET UNITYSDK_OFFSET(0x181C8810)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_NEGATIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x181C88E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_POSITIVEINTVALUE_OFFSET UNITYSDK_OFFSET(0x181C88C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x181C8920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181C8EB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_WRITETO_OFFSET UNITYSDK_OFFSET(0x181C8F10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C9850)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181C86B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x181C85D0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_TypeDefinitionIndex = 33998;

	class UninterpretedOption : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__repeated_name_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x4E910);
		}
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_TypeDefinitionIndex)->GetStaticField(0x4E918);
		}
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>* name_; // 0x10
		::System::String* aggregateValue_; // 0x18
		::MiHoYo::SDK::Protobuf::ByteString* stringValue_; // 0x20
		::System::String* identifierValue_; // 0x28
		::System::Double doubleValue_; // 0x30
		::System::UInt64 positiveIntValue_; // 0x38
		::System::Int64 negativeIntValue_; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_IdentifierValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_IDENTIFIERVALUE_OFFSET))(this, a1);
		}

		::System::UInt64 get_PositiveIntValue()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_POSITIVEINTVALUE_OFFSET))(this);
		}

		::System::Void set_PositiveIntValue(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_POSITIVEINTVALUE_OFFSET))(this, a1);
		}

		::System::Int64 get_NegativeIntValue()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_NEGATIVEINTVALUE_OFFSET))(this);
		}

		::System::Void set_NegativeIntValue(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_NEGATIVEINTVALUE_OFFSET))(this, a1);
		}

		::System::Double get_DoubleValue()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_DOUBLEVALUE_OFFSET))(this);
		}

		::System::Void set_DoubleValue(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_DOUBLEVALUE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::ByteString* get_StringValue()
		{
			return ((::MiHoYo::SDK::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_StringValue(::MiHoYo::SDK::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_STRINGVALUE_OFFSET))(this, a1);
		}

		::System::String* get_AggregateValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GET_AGGREGATEVALUE_OFFSET))(this);
		}

		::System::Void set_AggregateValue(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_SET_AGGREGATEVALUE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_MERGEFROM_OFFSET))(this, a1);
		}
	};
}
