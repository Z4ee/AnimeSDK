#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }
namespace MiHoYo::SDK { class MiHoYoSDKServer_NetworkResponseModel; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__CTOR_OFFSET UNITYSDK_OFFSET(0x185134A0)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__0_OFFSET UNITYSDK_OFFSET(0x18514B70)
#define MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__1_OFFSET UNITYSDK_OFFSET(0x18514CC0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer___c__DisplayClass108_0_TypeDefinitionIndex = 44596;

	class MiHoYoSDKServer___c__DisplayClass108_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::MiHoYoSDKServer_NetworkResponseModel*>* callback; // 0x10
		::MiHoYo::SDK::MiHoYoSDKServer* __4__this; // 0x18
		::System::String* requestUrl; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__CTOR_OFFSET))(this);
		}

		::System::Void _GetRequest_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__0_OFFSET))(this, a1);
		}

		::System::Void _GetRequest_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER___C__DISPLAYCLASS108_0__GETREQUEST_B__1_OFFSET))(this);
		}
	};
}
