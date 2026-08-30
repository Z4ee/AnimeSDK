#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class HoYoSDKNetworkInterface___c__DisplayClass12_0; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Uri; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C6F0B90)
#define MIHOYO_SDK_HOYOSDKNETWORKINTERFACE___C__DISPLAYCLASS12_1__HTTPDNSHTTPREQUESTWITHCUSTOMHANDLER_B__2_OFFSET UNITYSDK_OFFSET(0x1C6F0BC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int HoYoSDKNetworkInterface___c__DisplayClass12_1_TypeDefinitionIndex = 46562;

	class HoYoSDKNetworkInterface___c__DisplayClass12_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoSDKNetworkInterface___c__DisplayClass12_0* CS___8__locals1; // 0x10
		::System::Uri* uri; // 0x18
		::System::Action* timeoutCallback; // 0x20

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
