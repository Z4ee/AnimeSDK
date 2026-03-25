#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class LoginManager; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET UNITYSDK_OFFSET(0x160CD650)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__0_OFFSET UNITYSDK_OFFSET(0x160DED80)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__10_OFFSET UNITYSDK_OFFSET(0x160DF6A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__11_OFFSET UNITYSDK_OFFSET(0x160DF8A0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__12_OFFSET UNITYSDK_OFFSET(0x160DFAE0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__13_OFFSET UNITYSDK_OFFSET(0x160DFD20)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__14_OFFSET UNITYSDK_OFFSET(0x160E0160)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__15_OFFSET UNITYSDK_OFFSET(0x160E0440)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__16_OFFSET UNITYSDK_OFFSET(0x160DF1C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__17_OFFSET UNITYSDK_OFFSET(0x160DF3E0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__1_OFFSET UNITYSDK_OFFSET(0x160DEDD0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__2_OFFSET UNITYSDK_OFFSET(0x160DEE10)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__3_OFFSET UNITYSDK_OFFSET(0x160DEE50)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__6_OFFSET UNITYSDK_OFFSET(0x160DF0C0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__7_OFFSET UNITYSDK_OFFSET(0x160DF2F0)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__8_OFFSET UNITYSDK_OFFSET(0x160DF490)
#define MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__9_OFFSET UNITYSDK_OFFSET(0x160DF660)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass60_0_TypeDefinitionIndex = 8051;

	class LoginManager___c__DisplayClass60_0 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Win::LoginManager* __4__this; // 0x10
		::System::String* strPasswordElelmentID; // 0x18
		::System::Action_2<::System::String*, ::System::Boolean>* __9__16; // 0x20
		::System::String* strUIName; // 0x28
		::System::String* strAccountElementID; // 0x30
		::System::Action_1<::System::String*>* __9__17; // 0x38
		::System::Boolean bIsOversea; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__CTOR_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__6(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__6_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__16(::System::String* strUserName, ::System::Boolean loginSucc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__16_OFFSET))(this, strUserName, loginSucc);
		}

		::System::Void _ShowAccountLoginPluginUI_b__7(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__7_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__17(::System::String* strUserName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__17_OFFSET))(this, strUserName);
		}

		::System::Void _ShowAccountLoginPluginUI_b__8(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__8_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__9(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__9_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__10(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__10_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__11(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__11_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__12(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__12_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__13(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__13_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__14(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__14_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__15(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_LOGINMANAGER___C__DISPLAYCLASS60_0__SHOWACCOUNTLOGINPLUGINUI_B__15_OFFSET))(this, strArgs, callback);
		}
	};
}
