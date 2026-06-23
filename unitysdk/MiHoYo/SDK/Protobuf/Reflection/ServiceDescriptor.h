#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Protobuf/Reflection/DescriptorBase.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodDescriptor; }
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_CROSSLINK_OFFSET UNITYSDK_OFFSET(0x1E722160)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E7232D0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E723150)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptor_TypeDefinitionIndex = 28590;

	class ServiceDescriptor : public ::MiHoYo::SDK::Protobuf::Reflection::DescriptorBase
	{
	public:
		::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* proto; // 0x28
		::System::Collections::Generic::IList_1<::MiHoYo::SDK::Protobuf::Reflection::MethodDescriptor*>* methods; // 0x30

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto* proto, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::ServiceDescriptorProto*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEDESCRIPTOR__CTOR_OFFSET))(this, proto, file, index);
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
