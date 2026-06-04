#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_FILEPART_GET_DATA_OFFSET UNITYSDK_OFFSET(0xA213780)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPART_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0xA208E60)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPART_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA2140F0)
#define MIHOYO_SDK_SECURITYTUNNEL_FILEPART__CTOR_OFFSET UNITYSDK_OFFSET(0xA213F10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_FilePart_TypeDefinitionIndex = 43788;

	class SecurityTunnel_FilePart : public ::System::Object
	{
	public:
		::System::String* Content; // 0x10
		::System::UInt64 Offset; // 0x18
		::System::UInt64 ID; // 0x20

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEPART__CTOR_OFFSET))(this, a1);
		}

		::System::UInt64 get_Length()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEPART_GET_LENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_Data()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEPART_GET_DATA_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_FILEPART_TOSTRING_OFFSET))(this);
		}
	};
}
