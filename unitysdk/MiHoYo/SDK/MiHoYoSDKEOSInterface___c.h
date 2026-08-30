#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class LoginStatusChangedCallbackInfo; }
namespace Epic::OnlineServices::Auth { class OnLoginStatusChangedCallback; }
namespace Epic::OnlineServices::Logging { class LogMessage; }
namespace Epic::OnlineServices::Logging { class LogMessageFunc; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1948B7D0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1948B810)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__INITSDK_B__29_0_OFFSET UNITYSDK_OFFSET(0x1948BBE0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__SETEPICLOGGING_B__28_0_OFFSET UNITYSDK_OFFSET(0x1948B820)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c_TypeDefinitionIndex = 46761;

	class MiHoYoSDKEOSInterface___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::MiHoYoSDKEOSInterface___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKEOSInterface___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface___c_TypeDefinitionIndex)->GetStaticField(0x54360);
		}
		static ::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback** StaticGet___9__29_0()
		{
			return (::Epic::OnlineServices::Auth::OnLoginStatusChangedCallback**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface___c_TypeDefinitionIndex)->GetStaticField(0x54368);
		}
		static ::Epic::OnlineServices::Logging::LogMessageFunc** StaticGet___9__28_0()
		{
			return (::Epic::OnlineServices::Logging::LogMessageFunc**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKEOSInterface___c_TypeDefinitionIndex)->GetStaticField(0x54370);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetEpicLogging_b__28_0(::Epic::OnlineServices::Logging::LogMessage* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Logging::LogMessage*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__SETEPICLOGGING_B__28_0_OFFSET))(this, a1);
		}

		::System::Void _InitSDK_b__29_0(::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginStatusChangedCallbackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__INITSDK_B__29_0_OFFSET))(this, a1);
		}
	};
}
