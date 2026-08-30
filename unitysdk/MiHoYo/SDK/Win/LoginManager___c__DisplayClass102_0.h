#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE9110)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__0_OFFSET UNITYSDK_OFFSET(0x18AEE440)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__1_OFFSET UNITYSDK_OFFSET(0x18AEE8E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__2_OFFSET UNITYSDK_OFFSET(0x18AEECE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__3_OFFSET UNITYSDK_OFFSET(0x18AEED60)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass102_0_TypeDefinitionIndex = 9403;

	class LoginManager___c__DisplayClass102_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Web* web; // 0x10
		::System::Action_1<::System::String*>* customCallback; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__CTOR_OFFSET))(this);
		}

		::System::Void _ForgetPassword_b__0(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__0_OFFSET))(this, a1);
		}

		::System::Void _ForgetPassword_b__1(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__1_OFFSET))(this, a1);
		}

		::System::Boolean _ForgetPassword_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__2_OFFSET))(this);
		}

		::System::Void _ForgetPassword_b__3(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS102_0__FORGETPASSWORD_B__3_OFFSET))(this, a1, a2);
		}
	};
}
