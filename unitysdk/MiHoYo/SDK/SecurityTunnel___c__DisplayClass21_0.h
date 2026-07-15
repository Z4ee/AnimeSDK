#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/SecurityTunnel_ServerAddress.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class SecurityTunnel; }
namespace System { template <typename T> class Predicate_1; }

#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABAD3C0)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS21_0__RETRYCONNECT_B__0_OFFSET UNITYSDK_OFFSET(0x1ABBC380)
#define MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS21_0__RETRYCONNECT_B__1_OFFSET UNITYSDK_OFFSET(0x1ABBCA70)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int SecurityTunnel___c__DisplayClass21_0_TypeDefinitionIndex = 44690;

	class SecurityTunnel___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::MiHoYo::SDK::SecurityTunnel_ServerAddress>* __9__1; // 0x10
		::MiHoYo::SDK::SecurityTunnel* __4__this; // 0x18
		::System::Boolean shouldRetryCurrent; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Void _RetryConnect_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS21_0__RETRYCONNECT_B__0_OFFSET))(this);
		}

		::System::Boolean _RetryConnect_b__1(::MiHoYo::SDK::SecurityTunnel_ServerAddress a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::SecurityTunnel_ServerAddress))((::PBYTE)hIl2Cpp + MIHOYO_SDK_SECURITYTUNNEL___C__DISPLAYCLASS21_0__RETRYCONNECT_B__1_OFFSET))(this, a1);
		}
	};
}
