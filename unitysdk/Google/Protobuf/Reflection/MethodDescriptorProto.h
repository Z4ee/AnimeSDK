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

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17115240)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x17114030)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17114410)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x171143B0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x171148C0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x171142B0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17113C90)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASCLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17114320)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASINPUTTYPE_OFFSET UNITYSDK_OFFSET(0x171141D0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x17114120)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x17113FD0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17114280)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASSERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x171143A0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17113B50)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x171137E0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x17114290)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17113BC0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17113C30)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x17114330)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17115E70)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17115680)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17113E10)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET UNITYSDK_OFFSET(0x17114310)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET UNITYSDK_OFFSET(0x17114130)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17114080)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x171142A0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET UNITYSDK_OFFSET(0x171141E0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET UNITYSDK_OFFSET(0x17114390)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17114EE0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x17114F40)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x171161C0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17113E80)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x17113E70)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto_TypeDefinitionIndex = 6283;

	class MethodDescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_InputTypeDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x16D0);
		}
		static ::System::String** StaticGet_OutputTypeDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x16D8);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::MethodDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x16E0);
		}
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x16E8);
		}
		static ::System::Boolean* StaticGet_ServerStreamingDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x10B0);
		}
		static ::System::Boolean* StaticGet_ClientStreamingDefaultValue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MethodDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x10B1);
		}
		::System::String* inputType_; // 0x10
		::System::String* name_; // 0x18
		::Google::Protobuf::Reflection::MethodOptions* options_; // 0x20
		::System::String* outputType_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::System::Int32 _hasBits0; // 0x38
		::System::Boolean serverStreaming_; // 0x3C
		::System::Boolean clientStreaming_; // 0x3D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::MethodDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
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

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::System::String* get_InputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_INPUTTYPE_OFFSET))(this);
		}

		::System::Void set_InputType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_INPUTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HasInputType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASINPUTTYPE_OFFSET))(this);
		}

		::System::String* get_OutputType()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OUTPUTTYPE_OFFSET))(this);
		}

		::System::Void set_OutputType(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OUTPUTTYPE_OFFSET))(this, value);
		}

		::System::Boolean get_HasOutputType()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOUTPUTTYPE_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::MethodOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean get_ClientStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_CLIENTSTREAMING_OFFSET))(this);
		}

		::System::Void set_ClientStreaming(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_CLIENTSTREAMING_OFFSET))(this, value);
		}

		::System::Boolean get_HasClientStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASCLIENTSTREAMING_OFFSET))(this);
		}

		::System::Boolean get_ServerStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_SERVERSTREAMING_OFFSET))(this);
		}

		::System::Void set_ServerStreaming(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_SET_SERVERSTREAMING_OFFSET))(this, value);
		}

		::System::Boolean get_HasServerStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GET_HASSERVERSTREAMING_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::MethodDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::MethodDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::MethodDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
