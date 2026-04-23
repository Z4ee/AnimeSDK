#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1753A960)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__LOGOUTWITHCONFIRM_B__0_OFFSET UNITYSDK_OFFSET(0x1754C9F0)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__LOGOUTWITHCONFIRM_B__1_OFFSET UNITYSDK_OFFSET(0x1754CF50)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__LOGOUTWITHCONFIRM_B__2_OFFSET UNITYSDK_OFFSET(0x1754CCE0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass31_0_TypeDefinitionIndex = 7340;

	class LoginManager___c__DisplayClass31_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::Boolean>* __9__2; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogoutWithConfirm_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__LOGOUTWITHCONFIRM_B__0_OFFSET))(this);
		}

		::System::Void _LogoutWithConfirm_b__2(::System::Boolean deleteAccount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__LOGOUTWITHCONFIRM_B__2_OFFSET))(this, deleteAccount);
		}

		::System::Void _LogoutWithConfirm_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS31_0__LOGOUTWITHCONFIRM_B__1_OFFSET))(this);
		}
	};
}
