#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL_FORMATBYTES_OFFSET UNITYSDK_OFFSET(0xA20ACD0)
#define MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0xA214910)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel_LogUtil_TypeDefinitionIndex = 43819;

	class SecurityTunnel_LogUtil : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL__CTOR_OFFSET))(this);
		}

		static ::System::String* FormatBytes(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL_LOGUTIL_FORMATBYTES_OFFSET))(a1);
		}
	};
}
