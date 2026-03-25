#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface___c__DisplayClass12_1; }
namespace System { class String; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__CTOR_OFFSET UNITYSDK_OFFSET(0x84E5A10)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__3_OFFSET UNITYSDK_OFFSET(0x84E5A20)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_2_TypeDefinitionIndex = 36891;

	class HoYoSDKNetworkInterface___c__DisplayClass12_2 : public ::System::Object
	{
	public:
		::System::String* strIpAddr; // 0x10
		::MiHoYo::SDK::HoYoSDKNetworkInterface___c__DisplayClass12_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__3(::System::Object* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__3_OFFSET))(this, _);
		}
	};
}
