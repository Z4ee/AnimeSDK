#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0xB04A740)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0xB03FBD0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB04B2B0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB04AE10)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0xB040360)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_FileHeader_TypeDefinitionIndex = 46375;

	class SecurityTunnel_FileHeader : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* LocalPath; // 0x18
		::System::String* Md5; // 0x20
		::Il2CppArray<::System::Byte>* MD5Hash; // 0x28
		::System::UInt64 ID; // 0x30
		::System::UInt64 Length; // 0x38

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
