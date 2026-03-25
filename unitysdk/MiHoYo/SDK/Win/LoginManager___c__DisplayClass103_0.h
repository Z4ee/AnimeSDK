#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS103_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160D5E10)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS103_0__REGISTERACCOUNT_B__0_OFFSET UNITYSDK_OFFSET(0x160DBA70)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS103_0__REGISTERACCOUNT_B__1_OFFSET UNITYSDK_OFFSET(0x160DC240)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass103_0_TypeDefinitionIndex = 8064;

	class LoginManager___c__DisplayClass103_0 : public ::System::Object
	{
	public:
		::System::Action_2<::System::String*, ::System::Boolean>* customCallback; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18
		::MiHoYo::SDK::Web* web; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS103_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterAccount_b__0(::MiHoYo::SDK::JSONNode* node)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS103_0__REGISTERACCOUNT_B__0_OFFSET))(this, node);
		}

		::System::Void _RegisterAccount_b__1(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS103_0__REGISTERACCOUNT_B__1_OFFSET))(this, webView, message);
		}
	};
}
