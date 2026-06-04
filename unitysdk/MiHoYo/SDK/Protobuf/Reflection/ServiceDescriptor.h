#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x181B7C20)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x181C4920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x181B8530)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptor_TypeDefinitionIndex = 34046;

	class ServiceDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptor*>* methods; // 0x28
		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* proto; // 0x30

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* a1, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::Void CrossLink()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_CROSSLINK_OFFSET))(this);
		}
	};
}
