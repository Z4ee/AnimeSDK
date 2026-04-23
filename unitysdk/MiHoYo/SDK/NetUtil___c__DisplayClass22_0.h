#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class NetUtil_ResponseCallback; }
namespace System { class Action; }
namespace System { class String; }

#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS22_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17584390)
#define MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS22_0__TRYHTTPREQUESTBYHTTPDNS_B__0_OFFSET UNITYSDK_OFFSET(0x17584730)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int NetUtil___c__DisplayClass22_0_TypeDefinitionIndex = 7236;

	class NetUtil___c__DisplayClass22_0 : public ::System::Object
	{
	public:
		::System::Action* timeoutCallback; // 0x10
		::MiHoYo::SDK::NetUtil_ResponseCallback* responseCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS22_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryHttpRequestByHttpDns_b__0(::System::String* strResponse)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_NETUTIL___C__DISPLAYCLASS22_0__TRYHTTPREQUESTBYHTTPDNS_B__0_OFFSET))(this, strResponse);
		}
	};
}
