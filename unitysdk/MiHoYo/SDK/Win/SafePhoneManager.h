#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_BINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x174C3780)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CHECKSAFEMOBILE_OFFSET UNITYSDK_OFFSET(0x174C24C0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x174C30F0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HANDLETICKETINVALID_OFFSET UNITYSDK_OFFSET(0x174C3E80)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x174C2860)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x174C2C50)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x174C3100)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETBINDRESULT_OFFSET UNITYSDK_OFFSET(0x174C3520)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMAILCODE_OFFSET UNITYSDK_OFFSET(0x174C3AF0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMOBILECODE_OFFSET UNITYSDK_OFFSET(0x174C36A0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x174C3FF0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x174C3CE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x174C31E0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x174C3BC0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x174C39C0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_RESETTICKET_OFFSET UNITYSDK_OFFSET(0x174C3AE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x174C2910)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x174C26A0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x174C2D00)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x174C2570)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x174C2530)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x174C4210)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x174C4200)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMAILCODE_B__26_0_OFFSET UNITYSDK_OFFSET(0x174C5480)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMOBILECODE_B__22_0_OFFSET UNITYSDK_OFFSET(0x174C4EB0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMAILCAPTCHA_B__27_0_OFFSET UNITYSDK_OFFSET(0x174C5830)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMOBILECAPTCHA_B__24_0_OFFSET UNITYSDK_OFFSET(0x174C5260)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_0_OFFSET UNITYSDK_OFFSET(0x174C4260)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_1_OFFSET UNITYSDK_OFFSET(0x174C4290)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_2_OFFSET UNITYSDK_OFFSET(0x174C42C0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_3_OFFSET UNITYSDK_OFFSET(0x174C44C0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILE_B__13_0_OFFSET UNITYSDK_OFFSET(0x174C49F0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_0_OFFSET UNITYSDK_OFFSET(0x174C4A80)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_1_OFFSET UNITYSDK_OFFSET(0x174C4AB0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_2_OFFSET UNITYSDK_OFFSET(0x174C4AE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_3_OFFSET UNITYSDK_OFFSET(0x174C4B00)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAIL_B__17_0_OFFSET UNITYSDK_OFFSET(0x174C4E20)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafePhoneManager_TypeDefinitionIndex = 8116;

	class SafePhoneManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::SafePhoneManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SafePhoneManager**)Il2CppClass::FromTypeDefinitionIndex(SafePhoneManager_TypeDefinitionIndex)->GetStaticField(0x27C00);
		}
		// static const ::System::String* actionType; // 0x0
		::System::String* ticket; // 0x10
		::System::String* phoneNumber; // 0x18
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x20
		::System::Action_1<::System::String*>* m_callbackPluginUIGetMailCaptcha; // 0x28
		::System::Action* OnClose; // 0x30
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnBindSafePhoneSuccess; // 0x38
		::System::Action_2<::System::Int32, ::System::String*>* OnBindSafePhoneFail; // 0x40
		::MiHoYo::SDK::AccountModel* accountModel; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CheckSafeMobile(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CHECKSAFEMOBILE_OFFSET))(this, data);
		}

		::System::Void Show(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOW_OFFSET))(this, account);
		}

		::System::Void HideBindMobilePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEBINDMOBILEPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowBindMobilePluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILEPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowBindMobile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILE_OFFSET))(this);
		}

		::System::Void HideVerifyMailPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEVERIFYMAILPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowVerifyMailPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAILPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowVerifyMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAIL_OFFSET))(this);
		}

		::System::Void Close()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CLOSE_OFFSET))(this);
		}

		::System::Void OnBindMobile(::System::String* mobile, ::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONBINDMOBILE_OFFSET))(this, mobile, code);
		}

		::System::Void OnGetBindResult(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETBINDRESULT_OFFSET))(this, response);
		}

		::System::Void RequestBindMobile(::System::String* mobile, ::System::String* captcha, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTBINDMOBILE_OFFSET))(this, mobile, captcha, callback);
		}

		::System::Void OnGetMobileCode(::System::String* mobile)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMOBILECODE_OFFSET))(this, mobile);
		}

		::System::Void BindMobileTicket(::System::String* uid, ::System::String* token, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_BINDMOBILETICKET_OFFSET))(this, uid, token, callback);
		}

		::System::Void RequestMobileCaptcha(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMOBILECAPTCHA_OFFSET))(this, ticket);
		}

		::System::Void ResetTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_RESETTICKET_OFFSET))(this);
		}

		::System::Void OnGetMailCode(::System::String* mail)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMAILCODE_OFFSET))(this, mail);
		}

		::System::Void RequestMailCaptcha(::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMAILCAPTCHA_OFFSET))(this, ticket);
		}

		::System::Void OnVerifyMail(::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAIL_OFFSET))(this, code);
		}

		::System::Void HandleTicketInvalid(::System::Int32 nErrCode, ::System::String* strErrMsg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HANDLETICKETINVALID_OFFSET))(this, nErrCode, strErrMsg);
		}

		::System::Void OnVerifyMailByCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAILBYCODE_OFFSET))(this, response);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMobile_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILE_B__13_0_OFFSET))(this);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_3_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowVerifyMail_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAIL_B__17_0_OFFSET))(this);
		}

		::System::Void _OnGetMobileCode_b__22_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMOBILECODE_B__22_0_OFFSET))(this, response);
		}

		::System::Void _RequestMobileCaptcha_b__24_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMOBILECAPTCHA_B__24_0_OFFSET))(this, response);
		}

		::System::Void _OnGetMailCode_b__26_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMAILCODE_B__26_0_OFFSET))(this, response);
		}

		::System::Void _RequestMailCaptcha_b__27_0(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMAILCAPTCHA_B__27_0_OFFSET))(this, response);
		}
	};
}
