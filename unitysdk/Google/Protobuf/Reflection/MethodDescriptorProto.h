#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class MethodOptions; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17E75150)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x17E74040)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17E74330)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17E742D0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17E747E0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17E741D0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E73CA0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASCLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17E74240)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17E74140)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x17E740E0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x17E73FE0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17E741A0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASSERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x17E742C0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17E73B60)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x17E737F0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17E741B0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17E73BD0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17E73C40)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x17E74250)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17E75CB0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17E75590)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17E73E20)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17E74230)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17E740F0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17E74090)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17E741C0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17E74150)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x17E742B0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17E74DF0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17E74E50)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17E75EC0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17E73E90)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x17E73E80)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto_TypeDefinitionIndex = 5485;

	class MethodDescriptorProto : public ::System::Object
	{
	public:
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x3E8E0);
		}
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x3E8E8);
		}
		static ::System::String** StaticGet_InputTypeDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x3E8F0);
		}
		static ::System::String** StaticGet_OutputTypeDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x3E8F8);
		}
		static ::System::Boolean* StaticGet_ClientStreamingDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0xBA20);
		}
		static ::System::Boolean* StaticGet_ServerStreamingDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0xBA21);
		}
		::Google::Protobuf::Reflection::MethodOptions* options_; // 0x10
		::System::String* inputType_; // 0x18
		::System::String* outputType_; // 0x20
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x28
		::System::String* name_; // 0x30
		::System::Boolean clientStreaming_; // 0x38
		::System::Boolean serverStreaming_; // 0x39
		::System::Int32 _hasBits0; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::MethodDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::String* get_InputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_InputType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasInputType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASINPUTTYPE_OFFSET))(this);
		}

		::System::String* get_OutputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET))(this);
		}

		::System::Void set_OutputType(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOutputType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOUTPUTTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::MethodOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, a1);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean get_ClientStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET))(this);
		}

		::System::Void set_ClientStreaming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET))(this, a1);
		}

		::System::Boolean get_HasClientStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASCLIENTSTREAMING_OFFSET))(this);
		}

		::System::Boolean get_ServerStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET))(this);
		}

		::System::Void set_ServerStreaming(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET))(this, a1);
		}

		::System::Boolean get_HasServerStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASSERVERSTREAMING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::MethodDescriptorProto* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::MethodDescriptorProto* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, a1);
		}
	};
}
