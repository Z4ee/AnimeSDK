#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class FieldCodec_1; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceOptions; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC38DE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC387A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC38A00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC388B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC38AF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC38430)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_METHOD_OFFSET UNITYSDK_OFFSET(0x1FC388A0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC387F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FC38780)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1FC383D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC38EF0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC385B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1FC38800)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_OPTIONS_OFFSET UNITYSDK_OFFSET(0x1FC38790)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC38C80)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC38CE0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC390F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC38670)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC38610)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto_TypeDefinitionIndex = 29121;

	class ServiceDescriptorProto : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x247D0);
		}
		static ::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>** StaticGet__repeated_method_codec()
		{
			return (::MiHoYo::SDK::Protobuf::FieldCodec_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>**)Il2CppClass::FromTypeDefinitionIndex(ServiceDescriptorProto_TypeDefinitionIndex)->GetStaticField(0x247D8);
		}
		::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* options_; // 0x10
		::System::String* name_; // 0x18
		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>* method_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* other)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO__CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* Clone()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CLONE_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_NAME_OFFSET))(this, value);
		}

		::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>* get_Method()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::RepeatedField_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_METHOD_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* get_Options()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GET_OPTIONS_OFFSET))(this);
		}

		::System::Void set_Options(::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* value)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_SET_OPTIONS_OFFSET))(this, value);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* output)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_WRITETO_OFFSET))(this, output);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::Protobuf::CodedInputStream* input)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO_MERGEFROM_OFFSET))(this, input);
		}
	};
}
