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

#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x170F59D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x170F29C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x170F5570)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x170F5510)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x170F3180)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_ALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x170F5410)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x170F5490)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F5140)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x170F5480)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x170F5500)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x170F50E0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x170F5A90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x170F3B90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x170F52C0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_ALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x170F5470)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x170F54F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x170F57D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x170F5830)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x170F5BC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x170F5320)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x170F3B40)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions_TypeDefinitionIndex = 6298;

	class EnumOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumOptions*>**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x4D40);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x4D48);
		}
		static ::System::Boolean* StaticGet_AllowAliasDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x2910);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x2911);
		}
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::EnumOptions*>* _extensions; // 0x20
		::System::Boolean deprecated_; // 0x28
		::System::Boolean allowAlias_; // 0x29
		::System::Int32 _hasBits0; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumOptions*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumOptions*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumOptions* Clone()
		{
			return ((::Google::Protobuf::Reflection::EnumOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CLONE_OFFSET))(this);
		}

		::System::Boolean get_AllowAlias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_ALLOWALIAS_OFFSET))(this);
		}

		::System::Void set_AllowAlias(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_ALLOWALIAS_OFFSET))(this, value);
		}

		::System::Boolean get_HasAllowAlias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASALLOWALIAS_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_DEPRECATED_OFFSET))(this, value);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumOptions* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
