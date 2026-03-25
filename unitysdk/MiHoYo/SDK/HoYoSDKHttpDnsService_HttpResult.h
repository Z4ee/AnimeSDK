#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x84E0ED0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpResult_TypeDefinitionIndex = 36876;

	class HoYoSDKHttpDnsService_HttpResult : public ::System::Object
	{
	public:
		::System::String* header_response; // 0x10
		::System::String* error_msg; // 0x18
		::System::String* response; // 0x20
		::System::Int32 error_code; // 0x28
		::System::Int32 http_code; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKHTTPDNSSERVICE_HTTPRESULT__CTOR_OFFSET))(this);
		}
	};
}
