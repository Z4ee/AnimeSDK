#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface; }
namespace MiHoYo::SDK { class HoYoSDKNetworkInterface_CustomHttpRequestHandler; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA170F00)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_0__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0xA171090)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_0__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__1_OFFSET UNITYSDK_OFFSET(0xA172110)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_0_TypeDefinitionIndex = 43518;

	class HoYoSDKNetworkInterface___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* dicHeaders; // 0x10
		::System::Action* timeoutExternalCallback; // 0x18
		::System::String* strMethod; // 0x20
		::MiHoYo::SDK::HoYoSDKNetworkInterface* __4__this; // 0x28
		::System::String* strUrl; // 0x30
		::System::String* strExtraOptions; // 0x38
		::MiHoYo::SDK::HoYoSDKNetworkInterface_CustomHttpRequestHandler* customHttpRequestHander; // 0x40
		::Il2CppArray<::System::Byte>* arraBody; // 0x48
		::System::Action* __9__1; // 0x50
		::System::Action_1<::System::String*>* completeCallback; // 0x58
		::System::Boolean bIsSkipBox; // 0x60
		::System::Int32 nRecvTimeout; // 0x64
		::System::Int32 nPort; // 0x68
		::System::Int32 nConnectTimeout; // 0x6C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_0__CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_0__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__0_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_0__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__1_OFFSET))(this);
		}
	};
}
