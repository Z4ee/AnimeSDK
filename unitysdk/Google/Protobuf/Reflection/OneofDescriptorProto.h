#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Google::Protobuf::Reflection { class OneofOptions; }
namespace System { class String; }

#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x17118AA0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x171182E0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x17118460)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x17118400)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x17118610)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x17117F40)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_HASNAME_OFFSET UNITYSDK_OFFSET(0x171183D0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET UNITYSDK_OFFSET(0x17118280)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x171177B0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x171183E0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x17117EE0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x17119080)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x17118C40)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x171180C0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x17118330)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x171183F0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17118960)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x171189C0)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x17119200)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17118130)
#define GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x17118120)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int OneofDescriptorProto_TypeDefinitionIndex = 6272;

	class OneofDescriptorProto : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_NameDefaultValue()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OneofDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x17F0);
		}
		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(OneofDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x17F8);
		}
		::System::String* name_; // 0x10
		::Google::Protobuf::Reflection::OneofOptions* options_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Google::Protobuf::Reflection::OneofDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Google::Protobuf::Reflection::OneofDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofDescriptorProto* Clone()
		{
			return ((::Google::Protobuf::Reflection::OneofDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::System::Boolean get_HasName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_HASNAME_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::OneofOptions* get_Options()
		{
			return ((::Google::Protobuf::Reflection::OneofOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::Google::Protobuf::Reflection::OneofOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::OneofOptions*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_HasOptions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GET_HASOPTIONS_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::Google::Protobuf::Reflection::OneofDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::Google::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Google::Protobuf::Reflection::OneofDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Reflection::OneofDescriptorProto*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, other);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ONEOFDESCRIPTORPROTO_MERGEFROM_1_OFFSET))(this, input);
		}
	};
}
