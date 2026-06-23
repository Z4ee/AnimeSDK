#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3B7820)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1C3B7830)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1C3B7850)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1C3B7880)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x1C3B7BB0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x1C3B7C00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass37_0_TypeDefinitionIndex = 21106;

	class RealNameManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* account; // 0x10
		::System::Action_1<::System::String*>* verifyAction; // 0x18
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x20
		::System::Action* getCaptchaAction; // 0x28
		::System::Boolean isShowRedirect; // 0x30
		::System::Boolean isShowOtherVerify; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantMailPluginUI_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantMailPluginUI_b__1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantMailPluginUI_b__2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantMailPluginUI_b__3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGrantMailPluginUI_b__4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__4_OFFSET))(this, strArgs, callback);
		}
	};
}
