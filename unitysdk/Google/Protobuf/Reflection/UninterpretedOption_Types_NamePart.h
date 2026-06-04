#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E84670)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CLONE_OFFSET UNITYSDK_OFFSET(0x17E83F20)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E84120)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E840C0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E84360)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E83CA0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASISEXTENSION_OFFSET UNITYSDK_OFFSET(0x17E840B0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASNAMEPART__OFFSET UNITYSDK_OFFSET(0x17E84030)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x17E84040)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x17E83F70)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E83C40)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E849C0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E847D0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E83DC0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x17E840A0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x17E83FE0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E844E0)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E84540)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E84B70)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E83E30)
#define GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x17E83E20)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_Types_NamePart_TypeDefinitionIndex = 5512;

	class UninterpretedOption_Types_NamePart : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x3E980);
		}
		static ::System::String** StaticGet_NamePart_DefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x3E988);
		}
		static ::System::Boolean* StaticGet_IsExtensionDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0xBA80);
		}
		::System::String* namePart_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::Boolean isExtension_; // 0x20
		::System::Int32 _hasBits0; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET))(this, a1);
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

		::System::Void set_NamePart_(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET))(this, a1);
		}

		::System::Boolean get_HasNamePart_()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASNAMEPART__OFFSET))(this);
		}

		::System::Boolean get_IsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET))(this);
		}

		::System::Void set_IsExtension(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET))(this, a1);
		}

		::System::Boolean get_HasIsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_HASISEXTENSION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
