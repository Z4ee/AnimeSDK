#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/REAL_NAME_DIALOG_TYPE.h"
#include "unitysdk/MiHoYo/SDK/RealNameOperation.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER_BINDREALNAME_OFFSET UNITYSDK_OFFSET(0x1A36CAF0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_CHECKMODIFYREALNAME_OFFSET UNITYSDK_OFFSET(0x1A36B7C0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETALERTCONTENT_OFFSET UNITYSDK_OFFSET(0x1A36A6E0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETPHONEVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x1A36BCB0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1A36A240)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HELPCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A36AA80)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x1A36D9D0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x1A36D1A0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEREALNAME_OFFSET UNITYSDK_OFFSET(0x1A36A500)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDESECONDREALNAME_OFFSET UNITYSDK_OFFSET(0x1A36B120)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ISREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1A363A60)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_1_OFFSET UNITYSDK_OFFSET(0x1A36B660)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_OFFSET UNITYSDK_OFFSET(0x1A36BEA0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONBINDREALNAME_OFFSET UNITYSDK_OFFSET(0x1A36CF60)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1A36E980)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1A36C960)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A36E5E0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONTICKETINVALID_OFFSET UNITYSDK_OFFSET(0x1A36E360)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_OTHERVERIFY_OFFSET UNITYSDK_OFFSET(0x1A36E370)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_POPUPREALNAMEPARAMERROR_OFFSET UNITYSDK_OFFSET(0x1A36AB50)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REFUSEREALNAMECOMMAND_OFFSET UNITYSDK_OFFSET(0x1A36A850)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTREALNAMEAUTH_OFFSET UNITYSDK_OFFSET(0x1A36BB70)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTSECONDREALNAMEAUTH_OFFSET UNITYSDK_OFFSET(0x1A36B8F0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SECONDREALNAMEBINDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1A36B630)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A36DBC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x1A36C610)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A36D320)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x1A36C2C0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A36ADC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x1A363A90)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1A36B2D0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x1A36BA60)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A36EAF0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A36EAE0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__MODIFYREALNAME_B__28_0_OFFSET UNITYSDK_OFFSET(0x1A36EB40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager_TypeDefinitionIndex = 19929;

	class RealNameManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::RealNameManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::RealNameManager**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager_TypeDefinitionIndex)->GetStaticField(0x9C10);
		}
		// static const ::System::String* ModifyRealNameType; // 0x0
		::MiHoYo::SDK::Web* webView; // 0x10
		::System::Action* OnBack; // 0x18
		::MiHoYo::SDK::AccountModel* accountModel; // 0x20
		::System::String* m_strName; // 0x28
		::System::Action_3<::System::String*, ::System::String*, ::System::String*>* OnSuccess; // 0x30
		::System::String* m_strIdentity; // 0x38
		::System::String* actionTicket; // 0x40
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x48
		::System::Boolean isGrant; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsRealNameAccount(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ISREALNAMEACCOUNT_OFFSET))(account);
		}

		static ::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* model)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET))(model);
		}

		::System::Void HideRealName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEREALNAME_OFFSET))(this);
		}

		::System::String* GetAlertContent(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETALERTCONTENT_OFFSET))(this, type);
		}

		::System::Void RefuseRealNameCommand(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type, ::System::Boolean bIsSecondRealName)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REFUSEREALNAMECOMMAND_OFFSET))(this, type, bIsSecondRealName);
		}

		::System::Void HelpCommand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HELPCOMMAND_OFFSET))(this);
		}

		::System::Void PopupRealNameParamError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_POPUPREALNAMEPARAMERROR_OFFSET))(this);
		}

		::System::Boolean ShowRealNamePluginUI(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEPLUGINUI_OFFSET))(this, type, account);
		}

		::System::Void ShowRealNameView(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEVIEW_OFFSET))(this, type, account);
		}

		::System::Void HideSecondRealName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDESECONDREALNAME_OFFSET))(this);
		}

		::System::Boolean ShowSecondRealNamePluginUI(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEPLUGINUI_OFFSET))(this, type, account);
		}

		::System::Void SecondRealNameBindCommand(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SECONDREALNAMEBINDCOMMAND_OFFSET))(this, account);
		}

		::System::Void ShowSecondRealNameView(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE type, ::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEVIEW_OFFSET))(this, type, account);
		}

		::System::Void RequestRealNameAuth(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTREALNAMEAUTH_OFFSET))(this, account);
		}

		::System::Void RequestSecondRealNameAuth(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTSECONDREALNAMEAUTH_OFFSET))(this, account);
		}

		::System::Void GetPhoneVerifyCode(::System::String* actionType, ::System::String* actionTicket, ::System::String* mobile, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETPHONEVERIFYCODE_OFFSET))(this, actionType, actionTicket, mobile, callback);
		}

		::System::Void ModifyRealName(::System::String* actionTicket, ::System::String* idcard, ::System::String* name, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_OFFSET))(this, actionTicket, idcard, name, callback);
		}

		::System::Void CheckModifyRealName(::MiHoYo::SDK::AccountModel* account)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_CHECKMODIFYREALNAME_OFFSET))(this, account);
		}

		::System::Void ModifyRealName_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_1_OFFSET))(this);
		}

		::System::Void OnGetTicketByToken(::MiHoYo::SDK::NetworkResponseModel* responseModel)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETTICKETBYTOKEN_OFFSET))(this, responseModel);
		}

		::System::Void BindRealName(::System::String* ticket, ::System::String* realname, ::System::String* iddentityCard, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_BINDREALNAME_OFFSET))(this, ticket, realname, iddentityCard, callback);
		}

		::System::Void OnBindRealName(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONBINDREALNAME_OFFSET))(this, response);
		}

		::System::Void HideGrantPhone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTPHONE_OFFSET))(this);
		}

		::System::Boolean ShowGrantPhonePluginUI(::MiHoYo::SDK::AccountModel* account, ::System::Boolean isShowRedirect, ::System::Boolean isShowOtherVerify, ::System::Action* getCaptchaAction, ::System::Action_1<::System::String*>* verifyAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET))(this, account, isShowRedirect, isShowOtherVerify, getCaptchaAction, verifyAction);
		}

		::System::Void ShowGrantPhone(::MiHoYo::SDK::AccountModel* account, ::System::Boolean isShowRedirect, ::System::Boolean isShowOtherVerify)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONE_OFFSET))(this, account, isShowRedirect, isShowOtherVerify);
		}

		::System::Void HideGrantMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTMAIL_OFFSET))(this);
		}

		::System::Boolean ShowGrantMailPluginUI(::MiHoYo::SDK::AccountModel* account, ::System::Boolean isShowRedirect, ::System::Boolean isShowOtherVerify, ::System::Action* getCaptchaAction, ::System::Action_1<::System::String*>* verifyAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAILPLUGINUI_OFFSET))(this, account, isShowRedirect, isShowOtherVerify, getCaptchaAction, verifyAction);
		}

		::System::Void ShowGrantMail(::MiHoYo::SDK::AccountModel* account, ::System::Boolean isShowRedirect, ::System::Boolean isShowOtherVerify)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAIL_OFFSET))(this, account, isShowRedirect, isShowOtherVerify);
		}

		::System::Void OnTicketInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONTICKETINVALID_OFFSET))(this);
		}

		::System::Void OtherVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_OTHERVERIFY_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* webView, ::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, webView, message);
		}

		::System::Void OnGetPageClose(::MiHoYo::SDK::Web* webView)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETPAGECLOSE_OFFSET))(this, webView);
		}

		::System::Void _ModifyRealName_b__28_0(::MiHoYo::SDK::NetworkResponseModel* modifyResponse)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__MODIFYREALNAME_B__28_0_OFFSET))(this, modifyResponse);
		}
	};
}
