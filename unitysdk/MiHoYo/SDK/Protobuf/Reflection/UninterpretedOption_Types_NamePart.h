#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x173BFCF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_CLONE_OFFSET UNITYSDK_OFFSET(0x173BF930)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x173BFAF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_EQUALS_OFFSET UNITYSDK_OFFSET(0x173BFA60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x173BFB50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173BF770)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x173BFA40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x173BF990)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x173A5600)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x173BFD70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x173BF890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_ISEXTENSION_OFFSET UNITYSDK_OFFSET(0x173BFA50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_SET_NAMEPART__OFFSET UNITYSDK_OFFSET(0x173BF9A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0x173BFC10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART_WRITETO_OFFSET UNITYSDK_OFFSET(0x173BFC70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CCTOR_OFFSET UNITYSDK_OFFSET(0x173BFE70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_1_OFFSET UNITYSDK_OFFSET(0x173BF900)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_UNINTERPRETEDOPTION_TYPES_NAMEPART__CTOR_OFFSET UNITYSDK_OFFSET(0x173BF8F0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int UninterpretedOption_Types_NamePart_TypeDefinitionIndex = 33718;

	class UninterpretedOption_Types_NamePart : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::UninterpretedOption_Types_NamePart*>**)Il2CppClass::FromTypeDefinitionIndex(UninterpretedOption_Types_NamePart_TypeDefinitionIndex)->GetStaticField(0x69610);
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
