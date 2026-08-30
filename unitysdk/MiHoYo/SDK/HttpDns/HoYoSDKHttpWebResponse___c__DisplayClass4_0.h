#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HttpDns { class HoYoSDKHttpWebResponse; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB20A920)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__DOHTTPREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0xB20AE00)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse___c__DisplayClass4_0_TypeDefinitionIndex = 47160;

	class HoYoSDKHttpWebResponse___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse* __4__this; // 0x10
		::System::IO::Stream* responseHeaderStream; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::UInt64 _DoHttpRequest_b__1(::System::IntPtr a1, ::System::UInt64 a2, ::System::UInt64 a3, ::System::IntPtr a4)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__DOHTTPREQUEST_B__1_OFFSET))(this, a1, a2, a3, a4);
		}
	};
}
