#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1717A030)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1717D200)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1717D220)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1717D260)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x1717D520)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__4_OFFSET UNITYSDK_OFFSET(0x1717D560)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager___c__DisplayClass37_0_TypeDefinitionIndex = 9028;

	class RealNameManager___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* verifyAction; // 0x10
		::MiHoYo::SDK::Win::RealNameManager* __4__this; // 0x18
		::System::Action* getCaptchaAction; // 0x20
		::MiHoYo::SDK::AccountModel* account; // 0x28
		::System::Boolean isShowOtherVerify; // 0x30
		::System::Boolean isShowRedirect; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowGrantMailPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGrantMailPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGrantMailPluginUI_b__2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGrantMailPluginUI_b__3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGrantMailPluginUI_b__4(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER___C__DISPLAYCLASS37_0__SHOWGRANTMAILPLUGINUI_B__4_OFFSET))(this, a1, a2);
		}
	};
}
