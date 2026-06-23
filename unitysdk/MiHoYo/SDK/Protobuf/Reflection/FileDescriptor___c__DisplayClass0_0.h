#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class DescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedClrTypeInfo; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptorProto; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E84DF00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET UNITYSDK_OFFSET(0x1E84DF10)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET UNITYSDK_OFFSET(0x1E84DFC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0___CTOR_B__2_OFFSET UNITYSDK_OFFSET(0x1E84E070)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int FileDescriptor___c__DisplayClass0_0_TypeDefinitionIndex = 28570;

	class FileDescriptor___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::GeneratedClrTypeInfo* generatedCodeInfo; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* __ctor_b__0(::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto* message, ::System::Int32 index)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::DescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0___CTOR_B__0_OFFSET))(this, message, index);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor* __ctor_b__1(::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* enumType, ::System::Int32 index)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0___CTOR_B__1_OFFSET))(this, enumType, index);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor* __ctor_b__2(::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* service, ::System::Int32 index)
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptor*(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_FILEDESCRIPTOR___C__DISPLAYCLASS0_0___CTOR_B__2_OFFSET))(this, service, index);
		}
	};
}
