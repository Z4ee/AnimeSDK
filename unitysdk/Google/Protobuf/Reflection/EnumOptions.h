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

#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1B370330)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CLONE_OFFSET UNITYSDK_OFFSET(0x1B36D230)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B36FD30)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B36FCD0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B36D810)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_ALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x1B36FBD0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B36FC50)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B36F8A0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x1B36FC40)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASDEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B36FCC0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1B36F840)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1B3703F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1B36E0F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B36FA80)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_ALLOWALIAS_OFFSET UNITYSDK_OFFSET(0x1B36FC30)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_DEPRECATED_OFFSET UNITYSDK_OFFSET(0x1B36FCB0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B370070)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_WRITETO_OFFSET UNITYSDK_OFFSET(0x1B3700D0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B370620)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B36FAE0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B36E0A0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumOptions_TypeDefinitionIndex = 5494;

	class EnumOptions : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumOptions*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::EnumOptions*>**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x1E310);
		}
		static ::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>** StaticGet__repeated_uninterpretedOption_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Google::Protobuf::Reflection::UninterpretedOption*>**)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0x1E318);
		}
		static ::System::Boolean* StaticGet_DeprecatedDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0xA280);
		}
		static ::System::Boolean* StaticGet_AllowAliasDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(EnumOptions_TypeDefinitionIndex)->GetStaticField(0xA281);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Google::Protobuf::Reflection::UninterpretedOption*>* uninterpretedOption_; // 0x18
		::Google::Protobuf::ExtensionSet_1<::Google::Protobuf::Reflection::EnumOptions*>* _extensions; // 0x20
		::System::Int32 _hasBits0; // 0x28
		::System::Boolean allowAlias_; // 0x2C
		::System::Boolean deprecated_; // 0x2D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::EnumOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_AllowAlias(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_ALLOWALIAS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasAllowAlias()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASALLOWALIAS_OFFSET))(this);
		}

		::System::Boolean get_Deprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_DEPRECATED_OFFSET))(this);
		}

		::System::Void set_Deprecated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_SET_DEPRECATED_OFFSET))(this, a1);
		}

		::System::Boolean get_HasDeprecated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GET_HASDEPRECATED_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::EnumOptions* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::EnumOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::EnumOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMOPTIONS_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
