#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface___c__DisplayClass12_0; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0xA171490)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__2_OFFSET UNITYSDK_OFFSET(0xA172130)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_1_TypeDefinitionIndex = 43519;

	class HoYoSDKNetworkInterface___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::MiHoYo::SDK::HoYoSDKNetworkInterface___c__DisplayClass12_0* CS___8__locals1; // 0x18
		::System::Uri* uri; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET))(this);
		}

		::System::Void _HttpDnsHttpRequestWithCustomHandler_b__2(::System::Collections::Generic::List_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__2_OFFSET))(this, a1);
		}
	};
}
