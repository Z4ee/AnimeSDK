#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodOptions; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x181C1920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x181C0FA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x181C1300)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x181C12A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x181C1420)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x181C1260)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C0C70)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x181C0C50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x181C0A80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x181C0F30)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x181C0C60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x181AE520)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x181C1280)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x181C1A80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x181C0DF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x181C1270)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x181C1120)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x181C1080)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x181C0F90)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x181C11C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x181C1290)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x181C1770)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x181C17D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x181C1E10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x181C0E80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x181C0E50)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto_TypeDefinitionIndex = 33975;

	class MethodDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x4DD50);
		}
		::System::String* outputType_; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* options_; // 0x18
		::System::String* name_; // 0x20
		::System::String* inputType_; // 0x28
		::System::Boolean clientStreaming_; // 0x30
		::System::Boolean serverStreaming_; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::String* get_InputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_InputType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET))(this, a1);
		}

		::System::String* get_OutputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET))(this);
		}

		::System::Void set_OutputType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_ClientStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET))(this);
		}

		::System::Void set_ClientStreaming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET))(this, a1);
		}

		::System::Boolean get_ServerStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET))(this);
		}

		::System::Void set_ServerStreaming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}
	};
}
