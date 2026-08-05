#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::HoYoPass { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C92A780)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__0_OFFSET UNITYSDK_OFFSET(0x1C92A790)
#define MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__1_OFFSET UNITYSDK_OFFSET(0x1C92AC50)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass70_0_TypeDefinitionIndex = 20445;

	class LoginManager___c__DisplayClass70_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::HoYoPass::LoginManager* __4__this; // 0x10
		::System::Action_2<::System::Int32, ::System::String*>* callback; // 0x18
		::System::String* accountName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForgotPassword_b__0(::System::Int32 retcode, ::System::String* type, ::MiHoYo::SDK::JSONNode* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__0_OFFSET))(this, retcode, type, result);
		}

		::System::Void _ForgotPassword_b__1(::MiHoYo::SDK::Web* webPage, ::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_LOGINMANAGER___C__DISPLAYCLASS70_0__FORGOTPASSWORD_B__1_OFFSET))(this, webPage, node);
		}
	};
}
