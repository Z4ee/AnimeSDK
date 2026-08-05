#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodOptions; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FBA8D00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FBA8490)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FBA8850)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FBA87F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FBA8970)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x1FBA87B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBA8170)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1FBA8650)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FBA85A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FBA8470)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1FBA8700)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FBA8110)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x1FBA87D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FBA8E60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FBA82F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x1FBA87C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1FBA8660)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FBA85B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FBA8480)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x1FBA8710)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x1FBA87E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FBA8B50)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FBA8BB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FBA9190)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBA83A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBA8350)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto_TypeDefinitionIndex = 29123;

	class MethodDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x24990);
		}
		::System::String* name_; // 0x10
		::System::String* inputType_; // 0x18
		::System::String* outputType_; // 0x20
		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* options_; // 0x28
		::System::Boolean clientStreaming_; // 0x30
		::System::Boolean serverStreaming_; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::String* get_InputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_InputType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET))(this, value);
		}

		::System::String* get_OutputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET))(this);
		}

		::System::Void set_OutputType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_ClientStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET))(this);
		}

		::System::Void set_ClientStreaming(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET))(this, value);
		}

		::System::Boolean get_ServerStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET))(this);
		}

		::System::Void set_ServerStreaming(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
