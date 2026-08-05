#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/ThirdpartyMethod.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GETACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x1C7DFDA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONAPPLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFCC0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFACEBOOKLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFCE0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFORGOTPASSWORDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFCA0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGOOGLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD00)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGUESTLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFC60)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONREGISTERBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFC80)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONTWITTERLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDEACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C7E0670)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDE_OFFSET UNITYSDK_OFFSET(0x1C7E0660)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1C7DFDB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONAPPLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFCD0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONBACKBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFACEBOOKLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFCF0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFORGOTPASSWORDBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFCB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGOOGLELOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD10)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGUESTLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFC70)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONREGISTERBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFC90)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONTWITTERLOGINBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x1C7DFD30)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOWACCOUNTLOGINPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1C7DFF50)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOW_OFFSET UNITYSDK_OFFSET(0x1C7DFF40)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEACCOUNTINPUT_OFFSET UNITYSDK_OFFSET(0x1C7DFE20)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEPASSWORD_OFFSET UNITYSDK_OFFSET(0x1C7DFEB0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E0730)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_0_OFFSET UNITYSDK_OFFSET(0x1C7E0740)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_1_OFFSET UNITYSDK_OFFSET(0x1C7E0750)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_2_OFFSET UNITYSDK_OFFSET(0x1C7E0760)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_3_OFFSET UNITYSDK_OFFSET(0x1C7E0770)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_4_OFFSET UNITYSDK_OFFSET(0x1C7E08B0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_5_OFFSET UNITYSDK_OFFSET(0x1C7E08C0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_6_OFFSET UNITYSDK_OFFSET(0x1C7E08D0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_7_OFFSET UNITYSDK_OFFSET(0x1C7E08E0)
#define MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_8_OFFSET UNITYSDK_OFFSET(0x1C7E08F0)

namespace MiHoYo::SDK::UI::External::OS
{
	inline static constexpr unsigned int LoginByAccountPluginUI_TypeDefinitionIndex = 20519;

	class LoginByAccountPluginUI : public ::System::Object
	{
	public:
		// static const ::System::String* uiName; // 0x0
		::System::Action_2<::System::String*, ::System::String*>* _OnLoginBtnClicked_k__BackingField; // 0x10
		::System::Action_1<::System::String*>* _OnForgotPasswordBtnClicked_k__BackingField; // 0x18
		::System::Action* _OnCloseBtnClicked_k__BackingField; // 0x20
		::System::Action* _OnFacebookLoginBtnClicked_k__BackingField; // 0x28
		::System::Action* _OnGuestLoginBtnClicked_k__BackingField; // 0x30
		::System::Action* _OnGoogleLoginBtnClicked_k__BackingField; // 0x38
		::System::Action* _OnTwitterLoginBtnClicked_k__BackingField; // 0x40
		::System::Action* _OnBackBtnClicked_k__BackingField; // 0x48
		::System::Action* _OnAppleLoginBtnClicked_k__BackingField; // 0x50
		::System::Action* _OnRegisterBtnClicked_k__BackingField; // 0x58
		::System::String* inputAccount; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__CTOR_OFFSET))(this);
		}

		::System::Action_2<::System::String*, ::System::String*>* get_OnLoginBtnClicked()
		{
			return ((::System::Action_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnLoginBtnClicked(::System::Action_2<::System::String*, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnRegisterBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONREGISTERBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnRegisterBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONREGISTERBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action_1<::System::String*>* get_OnForgotPasswordBtnClicked()
		{
			return ((::System::Action_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFORGOTPASSWORDBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnForgotPasswordBtnClicked(::System::Action_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFORGOTPASSWORDBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnAppleLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONAPPLELOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnAppleLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONAPPLELOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnFacebookLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONFACEBOOKLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnFacebookLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONFACEBOOKLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnGoogleLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGOOGLELOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGoogleLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGOOGLELOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnTwitterLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONTWITTERLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnTwitterLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONTWITTERLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnGuestLoginBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONGUESTLOGINBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnGuestLoginBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONGUESTLOGINBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnCloseBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONCLOSEBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnCloseBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONCLOSEBTNCLICKED_OFFSET))(this, value);
		}

		::System::Action* get_OnBackBtnClicked()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GET_ONBACKBTNCLICKED_OFFSET))(this);
		}

		::System::Void set_OnBackBtnClicked(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SET_ONBACKBTNCLICKED_OFFSET))(this, value);
		}

		::System::String* GetAccountInput()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_GETACCOUNTINPUT_OFFSET))(this);
		}

		::System::Boolean IsVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_ISVISIBLE_OFFSET))(this);
		}

		::System::Void UpdateAccountInput(::System::String* accountName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEACCOUNTINPUT_OFFSET))(this, accountName);
		}

		::System::Void UpdatePassword(::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_UPDATEPASSWORD_OFFSET))(this, password);
		}

		::System::Void Show(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>* channels, ::System::Boolean enableBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOW_OFFSET))(this, channels, enableBack);
		}

		::System::Void ShowAccountLoginPluginUI(::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>* channels, ::System::Boolean enableBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MiHoYo::SDK::PC::OS::ThirdpartyMethod>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_SHOWACCOUNTLOGINPLUGINUI_OFFSET))(this, channels, enableBack);
		}

		::System::Void Hide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDE_OFFSET))(this);
		}

		::System::Void HideAccountLoginPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI_HIDEACCOUNTLOGINPLUGINUI_OFFSET))(this);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_4(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_4_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_5(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_5_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_6(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_6_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_7(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_7_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowAccountLoginPluginUI_b__47_8(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UI_EXTERNAL_OS_LOGINBYACCOUNTPLUGINUI__SHOWACCOUNTLOGINPLUGINUI_B__47_8_OFFSET))(this, strArgs, callback);
		}
	};
}
