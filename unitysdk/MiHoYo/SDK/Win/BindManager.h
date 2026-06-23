#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/Alert_AlertResult.h"
#include "unitysdk/MiHoYo/SDK/BIND_TYPE.h"
#include "unitysdk/MiHoYo/SDK/LoginPattern.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_BINDMANAGER_ACCOUNTPLATBIND_OFFSET UNITYSDK_OFFSET(0x1A9C8840)
#define MIHOYO_SDK_WIN_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x1A9C85E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_BINDIDENTITY_OFFSET UNITYSDK_OFFSET(0x1A9C8EB0)
#define MIHOYO_SDK_WIN_BINDMANAGER_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x1A9C8C50)
#define MIHOYO_SDK_WIN_BINDMANAGER_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1A9CE350)
#define MIHOYO_SDK_WIN_BINDMANAGER_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1A9C8B80)
#define MIHOYO_SDK_WIN_BINDMANAGER_GUESTBIND_OFFSET UNITYSDK_OFFSET(0x1A9CD320)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9C9BA0)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMIHOYO_OFFSET UNITYSDK_OFFSET(0x1A9CAA30)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEGUESTBINDPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9CD830)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEOVERSEAVERIFYPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9C92F0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A9CC8D0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x1A9CA4E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A9CCC50)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDTAPTAPACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A9CCED0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONCHECKACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A9CB660)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0x1A9CEBB0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETBINDTAPTAPTICKET_OFFSET UNITYSDK_OFFSET(0x1A9CCCE0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETGUESTBINDPHONECODE_OFFSET UNITYSDK_OFFSET(0x1A9CE810)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x1A9CB3D0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A9CE5E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x1A9CB010)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A9CC560)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x1A9CD180)
#define MIHOYO_SDK_WIN_BINDMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1A9CE0C0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_1_OFFSET UNITYSDK_OFFSET(0x1A9CA350)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x1A9CA1D0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTGUESTBINDPHONEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A9CE770)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A9CEA90)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYPHONE_OFFSET UNITYSDK_OFFSET(0x1A9CB1B0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_1_OFFSET UNITYSDK_OFFSET(0x1A9CA720)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_OFFSET UNITYSDK_OFFSET(0x1A9C9A30)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A9CAE90)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9C9C40)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAIL_OFFSET UNITYSDK_OFFSET(0x1A9C9FB0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMIHOYOPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9CABC0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMIHOYOVIEW_OFFSET UNITYSDK_OFFSET(0x1A9CA910)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDTAPTAPVIEW_OFFSET UNITYSDK_OFFSET(0x1A9CD1E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDMAILVIEW_OFFSET UNITYSDK_OFFSET(0x1A9CD6A0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9CD8E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDPHONEVIEW_OFFSET UNITYSDK_OFFSET(0x1A9CD530)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAGUESTBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9CDD60)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAGUESTBINDMAILVIEW_OFFSET UNITYSDK_OFFSET(0x1A9CD3C0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAVERIFYPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A9C9390)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWTAPTAPBIND_OFFSET UNITYSDK_OFFSET(0x1A9CA900)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x1A9C9820)
#define MIHOYO_SDK_WIN_BINDMANAGER_VERIFYEMAIL_OFFSET UNITYSDK_OFFSET(0x1A9C9110)
#define MIHOYO_SDK_WIN_BINDMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A9CEE50)
#define MIHOYO_SDK_WIN_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9CEE40)
#define MIHOYO_SDK_WIN_BINDMANAGER__ONBINDACCOUNT_B__38_0_OFFSET UNITYSDK_OFFSET(0x1A9CF690)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_0_OFFSET UNITYSDK_OFFSET(0x1A9CEEA0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_1_OFFSET UNITYSDK_OFFSET(0x1A9CEF70)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_2_OFFSET UNITYSDK_OFFSET(0x1A9CF170)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOVIEW_B__31_0_OFFSET UNITYSDK_OFFSET(0x1A9CF5C0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDTAPTAPVIEW_B__41_1_OFFSET UNITYSDK_OFFSET(0x1A9CF750)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_0_OFFSET UNITYSDK_OFFSET(0x1A9CF7C0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_1_OFFSET UNITYSDK_OFFSET(0x1A9CF840)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_2_OFFSET UNITYSDK_OFFSET(0x1A9CF8D0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_3_OFFSET UNITYSDK_OFFSET(0x1A9CF8E0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_4_OFFSET UNITYSDK_OFFSET(0x1A9CF8F0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_0_OFFSET UNITYSDK_OFFSET(0x1A9CF900)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_1_OFFSET UNITYSDK_OFFSET(0x1A9CF930)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_2_OFFSET UNITYSDK_OFFSET(0x1A9CFBC0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_0_OFFSET UNITYSDK_OFFSET(0x1A9D0020)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_1_OFFSET UNITYSDK_OFFSET(0x1A9D0120)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_2_OFFSET UNITYSDK_OFFSET(0x1A9D0270)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_3_OFFSET UNITYSDK_OFFSET(0x1A9D0280)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_0_OFFSET UNITYSDK_OFFSET(0x1A9D0300)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_1_OFFSET UNITYSDK_OFFSET(0x1A9D0390)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_2_OFFSET UNITYSDK_OFFSET(0x1A9D0420)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_3_OFFSET UNITYSDK_OFFSET(0x1A9D0430)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 21121;

	class BindManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BindManager**)Il2CppClass::FromTypeDefinitionIndex(BindManager_TypeDefinitionIndex)->GetStaticField(0x9EA0);
		}
		::System::Action* OnBindSuccess; // 0x10
		::System::String* accountName; // 0x18
		::System::Action* OnBack; // 0x20
		::System::Action_2<::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::AccountModel*>* OnBindResult; // 0x28
		::MiHoYo::SDK::AccountModel* bindUserData; // 0x30
		::System::String* phoneAction; // 0x38
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x40
		::System::String* actionTicket; // 0x48
		::System::Action* OnClose; // 0x50
		::System::Action_1<::System::String*>* OnVerifyMobileSuccess; // 0x58
		::MiHoYo::SDK::BIND_TYPE bindType; // 0x60
		::MiHoYo::SDK::ReportType reportTypeOverSea; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__CCTOR_OFFSET))();
		}

		::System::Void BindEmail(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_BINDEMAIL_OFFSET))(this, callback);
		}

		::System::Void BindMobile(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_BINDMOBILE_OFFSET))(this, callback);
		}

		::System::Void BindIdentity(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_BINDIDENTITY_OFFSET))(this, callback);
		}

		::System::Void VerifyEmail(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_VERIFYEMAIL_OFFSET))(this, callback);
		}

		::System::Void AccountPlatBind(::System::String* funcName, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ACCOUNTPLATBIND_OFFSET))(this, funcName, callback);
		}

		::System::Void HideOverseaVerifyPhonePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_HIDEOVERSEAVERIFYPHONEPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowOverseaVerifyPhonePluginUI(::MiHoYo::SDK::AccountModel* userData)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAVERIFYPHONEPLUGINUI_OFFSET))(this, userData);
		}

		::System::Void ShowVerifyMail(::MiHoYo::SDK::AccountModel* userData)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWVERIFYMAIL_OFFSET))(this, userData);
		}

		::System::Void RequestMailCode(::MiHoYo::SDK::AccountModel* userData, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_OFFSET))(this, userData, callback);
		}

		::System::Void HideBindMailPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMAILPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowBindMailPluginUI(::MiHoYo::SDK::AccountModel* userData, ::System::String* ticket)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAILPLUGINUI_OFFSET))(this, userData, ticket);
		}

		::System::Void ShowBindMail(::MiHoYo::SDK::AccountModel* userData, ::System::String* ticket)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAIL_OFFSET))(this, userData, ticket);
		}

		::System::Void RequestBindEmailByCode(::System::String* mail, ::System::String* code, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_OFFSET))(this, mail, code, account);
		}

		::System::Void RequestBindEmailByCode_1(::System::String* mail, ::System::String* code, ::System::String* ticket, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_1_OFFSET))(this, mail, code, ticket, account);
		}

		::System::Void OnBindMailByCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDMAILBYCODE_OFFSET))(this, response);
		}

		::System::Void RequestMailCode_1(::System::String* mail, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_1_OFFSET))(this, mail, callback);
		}

		::System::Void ShowTapTapBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWTAPTAPBIND_OFFSET))(this);
		}

		::System::Void HideBindMiHoYo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMIHOYO_OFFSET))(this);
		}

		::System::Boolean ShowBindMiHoYoPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMIHOYOPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowBindMiHoYoView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMIHOYOVIEW_OFFSET))(this);
		}

		::System::Void RequestVerifyMessage(::System::String* phone)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTVERIFYMESSAGE_OFFSET))(this, phone);
		}

		::System::Void OnGetVerifyCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETVERIFYCODE_OFFSET))(this, response);
		}

		::System::Void RequestLoginByPhone(::System::String* phone, ::System::String* verifyCode)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYPHONE_OFFSET))(this, phone, verifyCode);
		}

		::System::Void OnGetPhoneLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETPHONELOGIN_OFFSET))(this, response);
		}

		::System::Void OnCheckAccount(::MiHoYo::SDK::JSONNode* model, ::MiHoYo::SDK::LoginPattern pattern, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::LoginPattern, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONCHECKACCOUNT_OFFSET))(this, model, pattern, index);
		}

		::System::Void OnLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void OnBindAccount(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDACCOUNT_OFFSET))(this, response);
		}

		::System::Void OnGetBindTapTapTicket(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETBINDTAPTAPTICKET_OFFSET))(this, response);
		}

		::System::Void OnBindTapTapAccount(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDTAPTAPACCOUNT_OFFSET))(this, response);
		}

		::System::Void ShowBindTapTapView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDTAPTAPVIEW_OFFSET))(this);
		}

		::System::Void OnTapTapLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONTAPTAPLOGIN_OFFSET))(this, response);
		}

		::System::Void OnBindResultCallback(::System::Int32 retcode, ::System::String* message, ::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDRESULTCALLBACK_OFFSET))(this, retcode, message, data);
		}

		::System::String* GetAccountParameters()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_GETACCOUNTPARAMETERS_OFFSET))(this);
		}

		::System::Void GuestBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_GUESTBIND_OFFSET))(this);
		}

		::System::Void ShowGuestBindMailView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDMAILVIEW_OFFSET))(this);
		}

		::System::Void HideGuestBindPhonePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_HIDEGUESTBINDPHONEPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowGuestBindPhonePluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDPHONEPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowGuestBindPhoneView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDPHONEVIEW_OFFSET))(this);
		}

		::System::Boolean ShowOverseaGuestBindMailPluginUI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAGUESTBINDMAILPLUGINUI_OFFSET))(this);
		}

		::System::Void ShowOverseaGuestBindMailView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAGUESTBINDMAILVIEW_OFFSET))(this);
		}

		::System::Void Register()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REGISTER_OFFSET))(this);
		}

		::System::Void ForgetPassword()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_FORGETPASSWORD_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void RequestGuestBindPhoneMessage(::System::String* phone)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTGUESTBINDPHONEMESSAGE_OFFSET))(this, phone);
		}

		::System::Void OnGetGuestBindPhoneCode(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETGUESTBINDPHONECODE_OFFSET))(this, response);
		}

		::System::Void RequestLoginByAccount(::System::String* account, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYACCOUNT_OFFSET))(this, account, password);
		}

		::System::Void OnGetAccountLogin(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETACCOUNTLOGIN_OFFSET))(this, response);
		}

		::System::Void _ShowBindMiHoYoPluginUI_b__30_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMiHoYoPluginUI_b__30_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMiHoYoPluginUI_b__30_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowBindMiHoYoView_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOVIEW_B__31_0_OFFSET))(this);
		}

		::System::Void _OnBindAccount_b__38_0(::MiHoYo::SDK::Alert_AlertResult result)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__ONBINDACCOUNT_B__38_0_OFFSET))(this, result);
		}

		::System::Void _ShowBindTapTapView_b__41_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDTAPTAPVIEW_B__41_1_OFFSET))(this);
		}

		::System::Void _ShowGuestBindMailView_b__46_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_0_OFFSET))(this);
		}

		::System::Void _ShowGuestBindMailView_b__46_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_1_OFFSET))(this);
		}

		::System::Void _ShowGuestBindMailView_b__46_2(::System::String* mail, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_2_OFFSET))(this, mail, password);
		}

		::System::Void _ShowGuestBindMailView_b__46_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_3_OFFSET))(this);
		}

		::System::Void _ShowGuestBindMailView_b__46_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_4_OFFSET))(this);
		}

		::System::Void _ShowGuestBindPhonePluginUI_b__49_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGuestBindPhonePluginUI_b__49_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGuestBindPhonePluginUI_b__49_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_0_OFFSET))(this);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_1(::System::String* phone)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_1_OFFSET))(this, phone);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_2(::System::String* phone, ::System::String* code)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_2_OFFSET))(this, phone, code);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_3_OFFSET))(this);
		}

		::System::Void _ShowOverseaGuestBindMailView_b__52_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_0_OFFSET))(this);
		}

		::System::Void _ShowOverseaGuestBindMailView_b__52_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_1_OFFSET))(this);
		}

		::System::Void _ShowOverseaGuestBindMailView_b__52_2(::System::String* mail, ::System::String* password)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_2_OFFSET))(this, mail, password);
		}

		::System::Void _ShowOverseaGuestBindMailView_b__52_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_3_OFFSET))(this);
		}
	};
}
