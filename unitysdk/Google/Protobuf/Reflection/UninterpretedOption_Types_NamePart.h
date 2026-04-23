#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x171248D0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CLONE_OFFSET UNITYSDK_OFFSET(0x17124130)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17124380)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET UNITYSDK_OFFSET(0x17124320)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171245C0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17123EB0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASISEXTENSION_OFFSET UNITYSDK_OFFSET(0x17124310)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASNAMEPART__OFFSET UNITYSDK_OFFSET(0x17124290)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x171242A0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x17124180)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17123E50)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17124C70)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17124A30)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17123FD0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x17124300)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x171241F0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17124740)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET UNITYSDK_OFFSET(0x171247A0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CCTOR_OFFSET UNITYSDK_OFFSET(0x17124D70)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17124040)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x17124030)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_Types_NamePart_TypeDefinitionIndex = 6310;

	class UninterpretedOption_Types_NamePart : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x4700);
		}
		static ::System::String** StaticGet_NamePart_DefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x4708);
		}
		static ::System::Boolean* StaticGet_IsExtensionDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x26A0);
		}
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* namePart_; // 0x18
		::System::Boolean isExtension_; // 0x20
		::System::Int32 _hasBits0; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* Clone()
		{
			return ((::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CLONE_OFFSET))(this);
		}

		::System::String* get_NamePart_()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_NAMEPART__OFFSET))(this);
		}

		::System::Void set_NamePart_(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET))(this, value);
		}

		::System::Boolean get_HasNamePart_()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASNAMEPART__OFFSET))(this);
		}

		::System::Boolean get_IsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET))(this);
		}

		::System::Void set_IsExtension(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET))(this, value);
		}

		::System::Boolean get_HasIsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASISEXTENSION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
