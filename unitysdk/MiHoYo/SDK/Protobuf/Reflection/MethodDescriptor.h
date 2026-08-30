#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1B0FB040)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1B0FB020)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_PROTO_OFFSET UNITYSDK_OFFSET(0x1B0FB010)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0FAF80)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptor_TypeDefinitionIndex = 35173;

	class MethodDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* inputType; // 0x28
		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* outputType; // 0x30
		::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* proto; // 0x38
		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor* service; // 0x40

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* a1, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a2, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto* get_Proto()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_PROTO_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}
	};
}
