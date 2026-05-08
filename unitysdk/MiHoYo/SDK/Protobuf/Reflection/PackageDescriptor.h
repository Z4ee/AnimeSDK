#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }
namespace System { class String; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FILE_OFFSET UNITYSDK_OFFSET(0x1C377CC0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FULLNAME_OFFSET UNITYSDK_OFFSET(0x1C377CB0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C377CA0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1C377C90)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int PackageDescriptor_TypeDefinitionIndex = 26089;

	class PackageDescriptor : public ::System::Object
	{
	public:
		::System::String* fullName; // 0x10
		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file; // 0x18
		::System::String* name; // 0x20

		::System::Void _ctor(::System::String* name, ::System::String* fullName, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* file)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR__CTOR_OFFSET))(this, name, fullName, file);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_NAME_OFFSET))(this);
		}

		::System::String* get_FullName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FULLNAME_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_File()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_PACKAGEDESCRIPTOR_GET_FILE_OFFSET))(this);
		}
	};
}
