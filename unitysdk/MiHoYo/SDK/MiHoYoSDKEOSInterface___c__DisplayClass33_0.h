#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices::Auth { class LoginCallbackInfo; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA195FC0)
#define MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_0__LOGIN_B__0_OFFSET UNITYSDK_OFFSET(0xA198B30)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKEOSInterface___c__DisplayClass33_0_TypeDefinitionIndex = 43717;

	class MiHoYoSDKEOSInterface___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::Int32, ::System::String*>* callback; // 0x10
		::System::String* trace; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_0__CTOR_OFFSET))(this);
		}

		::System::Void _Login_b__0(::Epic::OnlineServices::Auth::LoginCallbackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Auth::LoginCallbackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKEOSINTERFACE___C__DISPLAYCLASS33_0__LOGIN_B__0_OFFSET))(this, a1);
		}
	};
}
