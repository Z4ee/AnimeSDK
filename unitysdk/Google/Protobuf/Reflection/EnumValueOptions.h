#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class ExtensionSet_1; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class UninterpretedOption; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x170F7DF0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x170F62A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x170F7AB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x170F7A50)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x170F6900)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x170F79D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F7710)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x170F7A40)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x170F76B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x170F7EA0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x170F71B0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F7890)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x170F7A30)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x170F7C60)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x170F7CC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x170F7FB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170F78F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x170F7160)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueOptions_TypeDefinitionIndex = 6300;

	class EnumValueOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueOptions*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValueOptions_TypeDefinitionIndex)->GetStaticField(0x4EC0);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValueOptions_TypeDefinitionIndex)->GetStaticField(0x4EC8);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnumValueOptions_TypeDefinitionIndex)->GetStaticField(0x2950);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::EnumValueOptions*>* _extensions; // 0x20
		::System::Int32 _hasBits0; // 0x28
		::System::Boolean deprecated_; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumValueOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumValueOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumValueOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumValueOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumValueOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEOPTIONS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
