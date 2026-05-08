#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_DIRECTORY_OFFSET UNITYSDK_OFFSET(0x18D29280)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_GET_PATH_OFFSET UNITYSDK_OFFSET(0x18D227D0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x18D29410)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18D290C0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D22E80)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_FileHeader_TypeDefinitionIndex = 35198;

	class SecurityTunnel_FileHeader : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10
		::System::String* LocalPath; // 0x18
		::Il2CppArray<::System::Byte>* MD5Hash; // 0x20
		::System::String* Md5; // 0x28
		::System::UInt64 Length; // 0x30
		::System::UInt64 ID; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEHEADER__CTOR_1_OFFSET))(this, jsonString);
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
