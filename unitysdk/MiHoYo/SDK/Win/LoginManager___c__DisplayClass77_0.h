#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONObject; }
namespace MiHoYo::SDK { class NetworkResponseModelEx; }
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS77_0__CTOR_OFFSET UNITYSDK_OFFSET(0x184F2EE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS77_0__REQUESTLOGINBYAUTHTICKET_B__0_OFFSET UNITYSDK_OFFSET(0x18504AF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS77_0__REQUESTLOGINBYAUTHTICKET_G__SUCCESSCALLBACK_1_OFFSET UNITYSDK_OFFSET(0x18506960)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass77_0_TypeDefinitionIndex = 9104;

	class LoginManager___c__DisplayClass77_0 : public ::System::Object
	{
	public:
		::System::String* loginType; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18
		::System::String* traceId; // 0x20
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::MiHoYo::SDK::AccountModel*>*>* callback; // 0x28
		::MiHoYo::SDK::JSONObject* reportBody; // 0x30
		::System::String* authTicket; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS77_0__CTOR_OFFSET))(this);
		}

		::System::Void _RequestLoginByAuthTicket_b__0(::MiHoYo::SDK::NetworkResponseModelEx* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModelEx*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS77_0__REQUESTLOGINBYAUTHTICKET_B__0_OFFSET))(this, a1);
		}

		::System::Void _RequestLoginByAuthTicket_g__successCallback_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS77_0__REQUESTLOGINBYAUTHTICKET_G__SUCCESSCALLBACK_1_OFFSET))(this, a1);
		}
	};
}
