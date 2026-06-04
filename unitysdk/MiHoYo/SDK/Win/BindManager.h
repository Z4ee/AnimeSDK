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

#define MIHOYO_SDK_WIN_BINDMANAGER_ACCOUNTPLATBIND_OFFSET UNITYSDK_OFFSET(0x18477230)
#define MIHOYO_SDK_WIN_BINDMANAGER_BINDEMAIL_OFFSET UNITYSDK_OFFSET(0x18476F20)
#define MIHOYO_SDK_WIN_BINDMANAGER_BINDIDENTITY_OFFSET UNITYSDK_OFFSET(0x18477880)
#define MIHOYO_SDK_WIN_BINDMANAGER_BINDMOBILE_OFFSET UNITYSDK_OFFSET(0x18477570)
#define MIHOYO_SDK_WIN_BINDMANAGER_FORGETPASSWORD_OFFSET UNITYSDK_OFFSET(0x1847DEC0)
#define MIHOYO_SDK_WIN_BINDMANAGER_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x184774A0)
#define MIHOYO_SDK_WIN_BINDMANAGER_GUESTBIND_OFFSET UNITYSDK_OFFSET(0x1847CCF0)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x184786E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMIHOYO_OFFSET UNITYSDK_OFFSET(0x18479730)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEGUESTBINDPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1847D380)
#define MIHOYO_SDK_WIN_BINDMANAGER_HIDEOVERSEAVERIFYPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18477DC0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDACCOUNT_OFFSET UNITYSDK_OFFSET(0x1847BD00)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x18479100)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDRESULTCALLBACK_OFFSET UNITYSDK_OFFSET(0x1847C070)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONBINDTAPTAPACCOUNT_OFFSET UNITYSDK_OFFSET(0x1847C730)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONCHECKACCOUNT_OFFSET UNITYSDK_OFFSET(0x1847A760)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETACCOUNTLOGIN_OFFSET UNITYSDK_OFFSET(0x1847E9B0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETBINDTAPTAPTICKET_OFFSET UNITYSDK_OFFSET(0x1847C0E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETGUESTBINDPHONECODE_OFFSET UNITYSDK_OFFSET(0x1847E590)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETPHONELOGIN_OFFSET UNITYSDK_OFFSET(0x1847A4F0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1847E210)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONGETVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x18479F60)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x1847B9C0)
#define MIHOYO_SDK_WIN_BINDMANAGER_ONTAPTAPLOGIN_OFFSET UNITYSDK_OFFSET(0x1847C9F0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1847DB70)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_1_OFFSET UNITYSDK_OFFSET(0x18478F50)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_OFFSET UNITYSDK_OFFSET(0x18478DB0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTGUESTBINDPHONEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1847E4C0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYACCOUNT_OFFSET UNITYSDK_OFFSET(0x1847E880)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYPHONE_OFFSET UNITYSDK_OFFSET(0x1847A2B0)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_1_OFFSET UNITYSDK_OFFSET(0x18479380)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_OFFSET UNITYSDK_OFFSET(0x18478540)
#define MIHOYO_SDK_WIN_BINDMANAGER_REQUESTVERIFYMESSAGE_OFFSET UNITYSDK_OFFSET(0x18479DB0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18478780)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAIL_OFFSET UNITYSDK_OFFSET(0x18478B40)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMIHOYOPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18479930)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMIHOYOVIEW_OFFSET UNITYSDK_OFFSET(0x184795B0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDTAPTAPVIEW_OFFSET UNITYSDK_OFFSET(0x1847CA10)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDMAILVIEW_OFFSET UNITYSDK_OFFSET(0x1847D180)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1847D430)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWGUESTBINDPHONEVIEW_OFFSET UNITYSDK_OFFSET(0x1847CFB0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAGUESTBINDMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1847D7C0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAGUESTBINDMAILVIEW_OFFSET UNITYSDK_OFFSET(0x1847CDE0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAVERIFYPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18477E60)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWTAPTAPBIND_OFFSET UNITYSDK_OFFSET(0x184795A0)
#define MIHOYO_SDK_WIN_BINDMANAGER_SHOWVERIFYMAIL_OFFSET UNITYSDK_OFFSET(0x184782E0)
#define MIHOYO_SDK_WIN_BINDMANAGER_VERIFYEMAIL_OFFSET UNITYSDK_OFFSET(0x18477B90)
#define MIHOYO_SDK_WIN_BINDMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1847EC30)
#define MIHOYO_SDK_WIN_BINDMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1847EC20)
#define MIHOYO_SDK_WIN_BINDMANAGER__ONBINDACCOUNT_B__38_0_OFFSET UNITYSDK_OFFSET(0x1847F410)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_0_OFFSET UNITYSDK_OFFSET(0x1847EC80)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_1_OFFSET UNITYSDK_OFFSET(0x1847ECF0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_2_OFFSET UNITYSDK_OFFSET(0x1847EEB0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOVIEW_B__31_0_OFFSET UNITYSDK_OFFSET(0x1847F3A0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDTAPTAPVIEW_B__41_1_OFFSET UNITYSDK_OFFSET(0x1847F480)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_0_OFFSET UNITYSDK_OFFSET(0x1847F6F0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_1_OFFSET UNITYSDK_OFFSET(0x1847F770)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_2_OFFSET UNITYSDK_OFFSET(0x1847F810)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_3_OFFSET UNITYSDK_OFFSET(0x1847F820)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_4_OFFSET UNITYSDK_OFFSET(0x1847F830)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_0_OFFSET UNITYSDK_OFFSET(0x1847F840)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_1_OFFSET UNITYSDK_OFFSET(0x1847F880)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_2_OFFSET UNITYSDK_OFFSET(0x1847FB20)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_0_OFFSET UNITYSDK_OFFSET(0x18480020)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_1_OFFSET UNITYSDK_OFFSET(0x184800C0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_2_OFFSET UNITYSDK_OFFSET(0x18480140)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_3_OFFSET UNITYSDK_OFFSET(0x18480150)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_0_OFFSET UNITYSDK_OFFSET(0x184801D0)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_1_OFFSET UNITYSDK_OFFSET(0x18480270)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_2_OFFSET UNITYSDK_OFFSET(0x18480310)
#define MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_3_OFFSET UNITYSDK_OFFSET(0x18480320)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BindManager_TypeDefinitionIndex = 9031;

	class BindManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::BindManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::BindManager**)Il2CppClass::FromTypeDefinitionIndex(BindManager_TypeDefinitionIndex)->GetStaticField(0x260D0);
		}
		::System::Action* OnClose; // 0x10
		::MiHoYo::SDK::AccountModel* bindUserData; // 0x18
		::System::Action* OnBack; // 0x20
		::System::String* phoneAction; // 0x28
		::System::String* accountName; // 0x30
		::System::Action* OnBindSuccess; // 0x38
		::System::Action_2<::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::AccountModel*>* OnBindResult; // 0x40
		::System::Action_1<::System::String*>* OnVerifyMobileSuccess; // 0x48
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x50
		::System::String* actionTicket; // 0x58
		::MiHoYo::SDK::ReportType reportTypeOverSea; // 0x60
		::MiHoYo::SDK::BIND_TYPE bindType; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__CCTOR_OFFSET))();
		}

		::System::Void BindEmail(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_BINDEMAIL_OFFSET))(this, a1);
		}

		::System::Void BindMobile(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_BINDMOBILE_OFFSET))(this, a1);
		}

		::System::Void BindIdentity(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_BINDIDENTITY_OFFSET))(this, a1);
		}

		::System::Void VerifyEmail(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_VERIFYEMAIL_OFFSET))(this, a1);
		}

		::System::Void AccountPlatBind(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ACCOUNTPLATBIND_OFFSET))(this, a1, a2);
		}

		::System::Void HideOverseaVerifyPhonePluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_HIDEOVERSEAVERIFYPHONEPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowOverseaVerifyPhonePluginUI(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWOVERSEAVERIFYPHONEPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void ShowVerifyMail(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWVERIFYMAIL_OFFSET))(this, a1);
		}

		::System::Void RequestMailCode(::MiHoYo::SDK::AccountModel* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_OFFSET))(this, a1, a2);
		}

		::System::Void HideBindMailPluginUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_HIDEBINDMAILPLUGINUI_OFFSET))(this);
		}

		::System::Boolean ShowBindMailPluginUI(::MiHoYo::SDK::AccountModel* a1, ::System::String* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAILPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowBindMail(::MiHoYo::SDK::AccountModel* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDMAIL_OFFSET))(this, a1, a2);
		}

		::System::Void RequestBindEmailByCode(::System::String* a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RequestBindEmailByCode_1(::System::String* a1, ::System::String* a2, ::System::String* a3, ::MiHoYo::SDK::AccountModel* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTBINDEMAILBYCODE_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBindMailByCode(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDMAILBYCODE_OFFSET))(this, a1);
		}

		::System::Void RequestMailCode_1(::System::String* a1, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTMAILCODE_1_OFFSET))(this, a1, a2);
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

		::System::Void RequestVerifyMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTVERIFYMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnGetVerifyCode(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETVERIFYCODE_OFFSET))(this, a1);
		}

		::System::Void RequestLoginByPhone(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYPHONE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetPhoneLogin(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETPHONELOGIN_OFFSET))(this, a1);
		}

		::System::Void OnCheckAccount(::MiHoYo::SDK::JSONNode* a1, ::MiHoYo::SDK::LoginPattern a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::MiHoYo::SDK::LoginPattern, ::System::Int32))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONCHECKACCOUNT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void OnBindAccount(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDACCOUNT_OFFSET))(this, a1);
		}

		::System::Void OnGetBindTapTapTicket(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETBINDTAPTAPTICKET_OFFSET))(this, a1);
		}

		::System::Void OnBindTapTapAccount(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDTAPTAPACCOUNT_OFFSET))(this, a1);
		}

		::System::Void ShowBindTapTapView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_SHOWBINDTAPTAPVIEW_OFFSET))(this);
		}

		::System::Void OnTapTapLogin(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONTAPTAPLOGIN_OFFSET))(this, a1);
		}

		::System::Void OnBindResultCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::JSONNode* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONBINDRESULTCALLBACK_OFFSET))(this, a1, a2, a3);
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

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void RequestGuestBindPhoneMessage(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTGUESTBINDPHONEMESSAGE_OFFSET))(this, a1);
		}

		::System::Void OnGetGuestBindPhoneCode(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETGUESTBINDPHONECODE_OFFSET))(this, a1);
		}

		::System::Void RequestLoginByAccount(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_REQUESTLOGINBYACCOUNT_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetAccountLogin(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER_ONGETACCOUNTLOGIN_OFFSET))(this, a1);
		}

		::System::Void _ShowBindMiHoYoPluginUI_b__30_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMiHoYoPluginUI_b__30_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMiHoYoPluginUI_b__30_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOPLUGINUI_B__30_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowBindMiHoYoView_b__31_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWBINDMIHOYOVIEW_B__31_0_OFFSET))(this);
		}

		::System::Void _OnBindAccount_b__38_0(::MiHoYo::SDK::Alert_AlertResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Alert_AlertResult))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__ONBINDACCOUNT_B__38_0_OFFSET))(this, a1);
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

		::System::Void _ShowGuestBindMailView_b__46_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGuestBindMailView_b__46_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_3_OFFSET))(this);
		}

		::System::Void _ShowGuestBindMailView_b__46_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDMAILVIEW_B__46_4_OFFSET))(this);
		}

		::System::Void _ShowGuestBindPhonePluginUI_b__49_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGuestBindPhonePluginUI_b__49_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGuestBindPhonePluginUI_b__49_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEPLUGINUI_B__49_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_0_OFFSET))(this);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_1_OFFSET))(this, a1);
		}

		::System::Void _ShowGuestBindPhoneView_b__50_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWGUESTBINDPHONEVIEW_B__50_2_OFFSET))(this, a1, a2);
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

		::System::Void _ShowOverseaGuestBindMailView_b__52_2(::System::String* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaGuestBindMailView_b__52_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BINDMANAGER__SHOWOVERSEAGUESTBINDMAILVIEW_B__52_3_OFFSET))(this);
		}
	};
}
