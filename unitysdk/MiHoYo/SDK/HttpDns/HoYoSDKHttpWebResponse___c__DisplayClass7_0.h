#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB20AC30)
#define MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS7_0__DOLOGGER_B__0_OFFSET UNITYSDK_OFFSET(0xB20AF00)

namespace MiHoYo::SDK::HttpDns
{
	inline static constexpr unsigned int HoYoSDKHttpWebResponse___c__DisplayClass7_0_TypeDefinitionIndex = 47161;

	class HoYoSDKHttpWebResponse___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::System::String* strLogMsg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::System::Void _DoLogger_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HTTPDNS_HOYOSDKHTTPWEBRESPONSE___C__DISPLAYCLASS7_0__DOLOGGER_B__0_OFFSET))(this);
		}
	};
}
