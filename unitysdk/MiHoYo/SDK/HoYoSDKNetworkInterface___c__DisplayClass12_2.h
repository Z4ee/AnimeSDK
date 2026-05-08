#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface___c__DisplayClass12_1; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1A49D570)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__2_OFFSET UNITYSDK_OFFSET(0x1A49D590)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_2_TypeDefinitionIndex = 34935;

	class HoYoSDKNetworkInterface___c__DisplayClass12_2 : public ::System::Object
	{
	public:
		::System::Uri* uri; // 0x10
		::MiHoYo::SDK::HoYoSDKNetworkInterface___c__DisplayClass12_1* CS___8__locals2; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__2(::System::Collections::Generic::List_1<::System::String*>* lstIps)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_2__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__2_OFFSET))(this, lstIps);
		}
	};
}
