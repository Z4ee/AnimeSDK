#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKHttpDnsService_HttpDnsEventName_TypeDefinitionIndex = 44370;

	class HoYoSDKHttpDnsService_HttpDnsEventName : public ::System::Object
	{
	public:
		// static const ::System::String* DNS_REQUEST_EVENT; // 0x0
		// static const ::System::String* DNS_REQUEST_FAILED_EVENT; // 0x0
		// static const ::System::String* DNS_USE_EXPIRED_CACHE_EVENT; // 0x0
		// static const ::System::String* IP_DIRECT_ACCESS_SUCCESS_EVENT; // 0x0
	};
}
