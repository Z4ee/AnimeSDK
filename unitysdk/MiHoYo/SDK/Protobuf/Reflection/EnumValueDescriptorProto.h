#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumValueOptions; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB02E60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB02960)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB02BE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB02B10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB02C80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB02670)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FB02A40)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1FB02AF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FB02940)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FB02610)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB02FF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB027F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FB02A50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NUMBER_OFFSET UNITYSDK_OFFSET(0x1FB02B00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FB02950)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB02D50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB02DB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB031A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB02890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB02850)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptorProto_TypeDefinitionIndex = 29119;

	class EnumValueDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(EnumValueDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x246E0);
		}
		::System::String* name_; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions* options_; // 0x18
		::System::Int32 number_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Int32 get_Number()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_NUMBER_OFFSET))(this);
		}

		::System::Void set_Number(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_NUMBER_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumValueDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
