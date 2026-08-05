#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class BiliBiliDelegate_GetProcessWndDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKInitDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKLoginDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKLogoutDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKPayDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKStartHeartbeatDelegate; }
namespace MiHoYo::SDK { class BiliBiliDelegate_SDKUnInitDelegate; }

#define MIHOYO_SDK_BILIBILIDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8D5BA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int BiliBiliDelegate_TypeDefinitionIndex = 19702;

	class BiliBiliDelegate : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate** StaticGet_SDKPay()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKPayDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB210);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate** StaticGet_GetProcessWnd()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_GetProcessWndDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB218);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate** StaticGet_SDKStartHeartbeat()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKStartHeartbeatDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB220);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate** StaticGet_SDKInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB228);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate** StaticGet_SDKUnInit()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKUnInitDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB230);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate** StaticGet_SDKLogin()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLoginDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB238);
		}
		static ::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate** StaticGet_SDKLogout()
		{
			return (::MiHoYo::SDK::BiliBiliDelegate_SDKLogoutDelegate**)Il2CppClass::FromTypeDefinitionIndex(BiliBiliDelegate_TypeDefinitionIndex)->GetStaticField(0xB240);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BILIBILIDELEGATE__CTOR_OFFSET))(this);
		}
	};
}
