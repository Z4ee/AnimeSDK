#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1B870950)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x1B881BA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__10_OFFSET UNITYSDK_OFFSET(0x1B8824A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__11_OFFSET UNITYSDK_OFFSET(0x1B8826A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__12_OFFSET UNITYSDK_OFFSET(0x1B8828F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__13_OFFSET UNITYSDK_OFFSET(0x1B882B40)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__14_OFFSET UNITYSDK_OFFSET(0x1B882FE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__15_OFFSET UNITYSDK_OFFSET(0x1B883300)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__16_OFFSET UNITYSDK_OFFSET(0x1B881FA0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__17_OFFSET UNITYSDK_OFFSET(0x1B8821E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x1B881BF0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x1B881C30)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x1B881C70)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__6_OFFSET UNITYSDK_OFFSET(0x1B881E90)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__7_OFFSET UNITYSDK_OFFSET(0x1B8820D0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__8_OFFSET UNITYSDK_OFFSET(0x1B882290)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__9_OFFSET UNITYSDK_OFFSET(0x1B882460)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass60_0_TypeDefinitionIndex = 9391;

	class LoginManager___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::System::String* strUIName; // 0x10
		::System::String* strPasswordElelmentID; // 0x18
		::System::Action_1<::System::String*>* __9__17; // 0x20
		::System::String* strAccountElementID; // 0x28
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x30
		::System::Action_2<::System::String*, ::System::Boolean>* __9__16; // 0x38
		::System::Boolean bIsOversea; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__6(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__6_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__16(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__16_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__7(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__7_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__17(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__17_OFFSET))(this, a1);
		}

		::System::Void _ShowAccountLoginPluginUI_b__8(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__8_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__9(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__9_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__10(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__10_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__11(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__11_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__12(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__12_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__13(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__13_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__14(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__14_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowAccountLoginPluginUI_b__15(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__15_OFFSET))(this, a1, a2);
		}
	};
}
