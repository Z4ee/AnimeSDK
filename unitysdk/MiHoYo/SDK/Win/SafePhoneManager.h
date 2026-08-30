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

#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_BINDMOBILETICKET_OFFSET UNITYSDK_OFFSET(0x1B8EDFE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CHECKSAFEMOBILE_OFFSET UNITYSDK_OFFSET(0x1B8ECB50)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CLOSE_OFFSET UNITYSDK_OFFSET(0x1B8ED950)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HANDLETICKETINVALID_OFFSET UNITYSDK_OFFSET(0x1B8EE780)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B8ED020)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HIDEVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B8ED460)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1B8ED970)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETBINDRESULT_OFFSET UNITYSDK_OFFSET(0x1B8EDDB0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMAILCODE_OFFSET UNITYSDK_OFFSET(0x1B8EE380)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMOBILECODE_OFFSET UNITYSDK_OFFSET(0x1B8EDEE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x1B8EE8F0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x1B8EE5D0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1B8EDA70)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMAILCAPTCHA_OFFSET UNITYSDK_OFFSET(0x1B8EE480)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMOBILECAPTCHA_OFFSET UNITYSDK_OFFSET(0x1B8EE220)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_RESETTICKET_OFFSET UNITYSDK_OFFSET(0x1B8EE370)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B8ED0D0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWBINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1B8ECE20)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B8ED510)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOWVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x1B8ECCC0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOW_OFFSET UNITYSDK_OFFSET(0x1B8ECC80)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8EEAE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8EEAC0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMAILCODE_B__26_0_OFFSET UNITYSDK_OFFSET(0x1B8EFB00)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMOBILECODE_B__22_0_OFFSET UNITYSDK_OFFSET(0x1B8EF630)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMAILCAPTCHA_B__27_0_OFFSET UNITYSDK_OFFSET(0x1B8EFDE0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMOBILECAPTCHA_B__24_0_OFFSET UNITYSDK_OFFSET(0x1B8EF910)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_0_OFFSET UNITYSDK_OFFSET(0x1B8EEB30)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_1_OFFSET UNITYSDK_OFFSET(0x1B8EEB70)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_2_OFFSET UNITYSDK_OFFSET(0x1B8EEBB0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_3_OFFSET UNITYSDK_OFFSET(0x1B8EED40)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILE_B__13_0_OFFSET UNITYSDK_OFFSET(0x1B8EF1B0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_0_OFFSET UNITYSDK_OFFSET(0x1B8EF250)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_1_OFFSET UNITYSDK_OFFSET(0x1B8EF290)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_2_OFFSET UNITYSDK_OFFSET(0x1B8EF2D0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_3_OFFSET UNITYSDK_OFFSET(0x1B8EF2F0)
#define MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAIL_B__17_0_OFFSET UNITYSDK_OFFSET(0x1B8EF590)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int SafePhoneManager_TypeDefinitionIndex = 9304;

	class SafePhoneManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::SafePhoneManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::SafePhoneManager**)Il2CppClass::FromTypeDefinitionIndex(SafePhoneManager_TypeDefinitionIndex)->GetStaticField(0x252E0);
		}
		// static const ::System::String* actionType; // 0x0
		::System::String* ticket; // 0x10
		::System::Action_1<::MiHoYo::SDK::AccountModel*>* OnBindSafePhoneSuccess; // 0x18
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x20
		::System::Action_2<::System::Int32, ::System::String*>* OnBindSafePhoneFail; // 0x28
		::System::Action_1<::System::String*>* m_callbackPluginUIGetMailCaptcha; // 0x30
		::System::Action* OnClose; // 0x38
		::System::String* phoneNumber; // 0x40
		::MiHoYo::SDK::AccountModel* accountModel; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean CheckSafeMobile(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_CHECKSAFEMOBILE_OFFSET))(this, a1);
		}

		::System::Void Show(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_SHOW_OFFSET))(this, a1);
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

		::System::Void OnBindMobile(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONBINDMOBILE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetBindResult(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETBINDRESULT_OFFSET))(this, a1);
		}

		::System::Void RequestBindMobile(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTBINDMOBILE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnGetMobileCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMOBILECODE_OFFSET))(this, a1);
		}

		::System::Void BindMobileTicket(::System::String* a1, ::System::String* a2, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_BINDMOBILETICKET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestMobileCaptcha(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMOBILECAPTCHA_OFFSET))(this, a1);
		}

		::System::Void ResetTicket()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_RESETTICKET_OFFSET))(this);
		}

		::System::Void OnGetMailCode(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONGETMAILCODE_OFFSET))(this, a1);
		}

		::System::Void RequestMailCaptcha(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_REQUESTMAILCAPTCHA_OFFSET))(this, a1);
		}

		::System::Void OnVerifyMail(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAIL_OFFSET))(this, a1);
		}

		::System::Void HandleTicketInvalid(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_HANDLETICKETINVALID_OFFSET))(this, a1, a2);
		}

		::System::Void OnVerifyMailByCode(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER_ONVERIFYMAILBYCODE_OFFSET))(this, a1);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobilePluginUI_b__12_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILEPLUGINUI_B__12_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMobile_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWBINDMOBILE_B__13_0_OFFSET))(this);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMailPluginUI_b__16_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAILPLUGINUI_B__16_3_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowVerifyMail_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__SHOWVERIFYMAIL_B__17_0_OFFSET))(this);
		}

		::System::Void _OnGetMobileCode_b__22_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMOBILECODE_B__22_0_OFFSET))(this, a1);
		}

		::System::Void _RequestMobileCaptcha_b__24_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMOBILECAPTCHA_B__24_0_OFFSET))(this, a1);
		}

		::System::Void _OnGetMailCode_b__26_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__ONGETMAILCODE_B__26_0_OFFSET))(this, a1);
		}

		::System::Void _RequestMailCaptcha_b__27_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_SAFEPHONEMANAGER__REQUESTMAILCAPTCHA_B__27_0_OFFSET))(this, a1);
		}
	};
}
