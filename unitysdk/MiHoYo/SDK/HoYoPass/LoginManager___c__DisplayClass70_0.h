#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE97F80)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__0_OFFSET UNITYSDK_OFFSET(0x1AEA1440)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__1_OFFSET UNITYSDK_OFFSET(0x1AEA1940)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass70_0_TypeDefinitionIndex = 8292;

	class LoginManager___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::System::String* accountName; // 0x10
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x18
		::System::Action_2<::System::Int32, ::System::String*>* callback; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForgotPassword_b__0(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__0_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ForgotPassword_b__1(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__1_OFFSET))(this, a1, a2);
		}
	};
}
