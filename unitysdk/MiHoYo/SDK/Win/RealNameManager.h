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

#define MIHOYO_SDK_WIN_REALNAMEMANAGER_BINDREALNAME_OFFSET UNITYSDK_OFFSET(0x18799DB0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_CHECKMODIFYREALNAME_OFFSET UNITYSDK_OFFSET(0x18798840)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETALERTCONTENT_OFFSET UNITYSDK_OFFSET(0x18797600)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETPHONEVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x18798EF0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x187970A0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HELPCOMMAND_OFFSET UNITYSDK_OFFSET(0x18797990)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x1879AD30)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x1879A430)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEREALNAME_OFFSET UNITYSDK_OFFSET(0x18797370)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDESECONDREALNAME_OFFSET UNITYSDK_OFFSET(0x18798080)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ISREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x18788C70)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_1_OFFSET UNITYSDK_OFFSET(0x187986D0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_OFFSET UNITYSDK_OFFSET(0x18799120)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONBINDREALNAME_OFFSET UNITYSDK_OFFSET(0x1879A080)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1879BD00)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x18799B80)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1879B8F0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONTICKETINVALID_OFFSET UNITYSDK_OFFSET(0x1879B630)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_OTHERVERIFY_OFFSET UNITYSDK_OFFSET(0x1879B640)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_POPUPREALNAMEPARAMERROR_OFFSET UNITYSDK_OFFSET(0x18797A60)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REFUSEREALNAMECOMMAND_OFFSET UNITYSDK_OFFSET(0x18797760)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTREALNAMEAUTH_OFFSET UNITYSDK_OFFSET(0x18798D70)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTSECONDREALNAMEAUTH_OFFSET UNITYSDK_OFFSET(0x18798940)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SECONDREALNAMEBINDCOMMAND_OFFSET UNITYSDK_OFFSET(0x187986A0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1879AF20)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x187997B0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1879A620)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x187993E0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18797CD0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x18788CA0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18798300)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x18798AC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1879BEB0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1879BEA0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__MODIFYREALNAME_B__28_0_OFFSET UNITYSDK_OFFSET(0x1879BF00)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager_TypeDefinitionIndex = 9290;

	class RealNameManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Win::RealNameManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::RealNameManager**)Il2CppClass::FromTypeDefinitionIndex(RealNameManager_TypeDefinitionIndex)->GetStaticField(0x26BF0);
		}
		// static const ::System::String* ModifyRealNameType; // 0x0
		::System::String* m_strIdentity; // 0x10
		::System::String* actionTicket; // 0x18
		::MiHoYo::SDK::Web* webView; // 0x20
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x28
		::MiHoYo::SDK::AccountModel* accountModel; // 0x30
		::System::Action* OnBack; // 0x38
		::System::Action_3<::System::String*, ::System::String*, ::System::String*>* OnSuccess; // 0x40
		::System::String* m_strName; // 0x48
		::System::Boolean isGrant; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Boolean IsRealNameAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ISREALNAMEACCOUNT_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET))(a1);
		}

		::System::Void HideRealName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEREALNAME_OFFSET))(this);
		}

		::System::String* GetAlertContent(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETALERTCONTENT_OFFSET))(this, a1);
		}

		::System::Void RefuseRealNameCommand(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REFUSEREALNAMECOMMAND_OFFSET))(this, a1, a2);
		}

		::System::Void HelpCommand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HELPCOMMAND_OFFSET))(this);
		}

		::System::Void PopupRealNameParamError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_POPUPREALNAMEPARAMERROR_OFFSET))(this);
		}

		::System::Boolean ShowRealNamePluginUI(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowRealNameView(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void HideSecondRealName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDESECONDREALNAME_OFFSET))(this);
		}

		::System::Boolean ShowSecondRealNamePluginUI(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void SecondRealNameBindCommand(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SECONDREALNAMEBINDCOMMAND_OFFSET))(this, a1);
		}

		::System::Void ShowSecondRealNameView(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void RequestRealNameAuth(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTREALNAMEAUTH_OFFSET))(this, a1);
		}

		::System::Void RequestSecondRealNameAuth(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTSECONDREALNAMEAUTH_OFFSET))(this, a1);
		}

		::System::Void GetPhoneVerifyCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETPHONEVERIFYCODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ModifyRealName(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CheckModifyRealName(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_CHECKMODIFYREALNAME_OFFSET))(this, a1);
		}

		::System::Void ModifyRealName_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_1_OFFSET))(this);
		}

		::System::Void OnGetTicketByToken(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETTICKETBYTOKEN_OFFSET))(this, a1);
		}

		::System::Void BindRealName(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_BINDREALNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBindRealName(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONBINDREALNAME_OFFSET))(this, a1);
		}

		::System::Void HideGrantPhone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTPHONE_OFFSET))(this);
		}

		::System::Boolean ShowGrantPhonePluginUI(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Action* a4, ::System::Action_1<::System::String*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ShowGrantPhone(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideGrantMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTMAIL_OFFSET))(this);
		}

		::System::Boolean ShowGrantMailPluginUI(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Action* a4, ::System::Action_1<::System::String*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAILPLUGINUI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ShowGrantMail(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTicketInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONTICKETINVALID_OFFSET))(this);
		}

		::System::Void OtherVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_OTHERVERIFY_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void _ModifyRealName_b__28_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__MODIFYREALNAME_B__28_0_OFFSET))(this, a1);
		}
	};
}
