#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18AE23D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x18AF4930)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x18AF49E0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass69_0_TypeDefinitionIndex = 9393;

	class LoginManager___c__DisplayClass69_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* callback; // 0x10
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountListConfirmPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountListConfirmPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS69_0__SHOWACCOUNTLISTCONFIRMPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}
	};
}
