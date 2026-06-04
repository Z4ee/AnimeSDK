#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FILE_OFFSET UNITYSDK_OFFSET(0x181A5A00)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x181A2C60)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x181A59F0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorBase_TypeDefinitionIndex = 34013;

	class DescriptorBase : public ::System::Object
	{
	public:
		::System::String* fullName; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file; // 0x18
		::System::Int32 index; // 0x20

		::System::Void _ctor(::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* a1, ::System::String* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORBASE__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FULLNAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_File()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_DESCRIPTORBASE_GET_FILE_OFFSET))(this);
		}
	};
}
