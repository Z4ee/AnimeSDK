#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1C2734A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CLONE_OFFSET UNITYSDK_OFFSET(0x1C2730B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1C2732A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET UNITYSDK_OFFSET(0x1C273210)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1C273300)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C272E80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x1C2731F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x1C273140)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1C272E20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1C273520)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C272FA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x1C273200)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x1C273150)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C2733C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET UNITYSDK_OFFSET(0x1C273420)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C273620)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C273040)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x1C273000)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_Types_NamePart_TypeDefinitionIndex = 26050;

	class UninterpretedOption_Types_NamePart : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x1F2A0);
		}
		::System::String* namePart_; // 0x10
		::System::Boolean isExtension_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CLONE_OFFSET))(this);
		}

		::System::String* get_NamePart_()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_NAMEPART__OFFSET))(this);
		}

		::System::Void set_NamePart_(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET))(this, value);
		}

		::System::Boolean get_IsExtension()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET))(this);
		}

		::System::Void set_IsExtension(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET))(this, input);
		}
	};
}
