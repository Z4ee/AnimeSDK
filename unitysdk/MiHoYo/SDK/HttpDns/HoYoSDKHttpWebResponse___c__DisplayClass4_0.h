#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::HttpDns { class HoYoSDKHttpWebResponse; }
namespace System::IO { class Stream; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x84EF380)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__DOHTTPREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x84EF8A0)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse___c__DisplayClass4_0_TypeDefinitionIndex = 37382;

	class HoYoSDKHttpWebResponse___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::IO::Stream* responseHeaderStream; // 0x10
		::MiHoYo::SDK::HttpDns::HoYoSDKHttpWebResponse* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::UInt64 _DoHttpRequest_b__1(::System::IntPtr buffer, ::System::UInt64 sz, ::System::UInt64 nitems, ::System::IntPtr outstream)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IntPtr, ::System::UInt64, ::System::UInt64, ::System::IntPtr))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS4_0__DOHTTPREQUEST_B__1_OFFSET))(this, buffer, sz, nitems, outstream);
		}
	};
}
