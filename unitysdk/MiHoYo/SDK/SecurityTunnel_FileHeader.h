#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x1CD32360)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x1CD30FA0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1CD32500)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CD31EC0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD31E40)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_FileHeader_TypeDefinitionIndex = 46835;

	class SecurityTunnel_FileHeader : public ::System::Object
	{
	public:
		::System::String* Md5; // 0x10
		::System::String* Name; // 0x18
		::Il2CppArray<::System::Byte>* MD5Hash; // 0x20
		::System::String* LocalPath; // 0x28
		::System::UInt64 Length; // 0x30
		::System::UInt64 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_1_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_PATH_OFFSET))(this);
		}

		::System::String* get_Directory()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_DIRECTORY_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_TOSTRING_OFFSET))(this);
		}
	};
}
