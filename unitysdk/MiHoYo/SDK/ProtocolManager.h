#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ProtocolType.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Diagnostics { class Stopwatch; }

#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKOVERSEASHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18401840)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x183FFF20)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18400410)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x183FEF40)
#define MIHOYO_SDK_PROTOCOLMANAGER_DELETEPROTOCOLFLAGSBYAID_OFFSET UNITYSDK_OFFSET(0x18403EF0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAGKEY_OFFSET UNITYSDK_OFFSET(0x18402270)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x18408050)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLTIMEOUTBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x183FFCB0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x18409890)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x18408570)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETNEWACCOUNTSHOWID_OFFSET UNITYSDK_OFFSET(0x18401130)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETNEWPROTOCOLSHOWFLAGBYAIDANDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x18404230)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAGKEY_OFFSET UNITYSDK_OFFSET(0x18400E00)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x18402E70)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEYBYAIDANDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x184042A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x18402C20)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18401370)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x18401560)
#define MIHOYO_SDK_PROTOCOLMANAGER_HIDEOVERSEAPROTOCOL_OFFSET UNITYSDK_OFFSET(0x184038B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_HIDEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18403150)
#define MIHOYO_SDK_PROTOCOLMANAGER_INITWITHUSERAGREEMENTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x183FE8D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_NEEDUPDATEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18408AC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_1_OFFSET UNITYSDK_OFFSET(0x18404910)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18401F90)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTOVERSEAUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18404A90)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18404300)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18409330)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x184025E0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONNOSHOWLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x183FEE00)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLACCEPT_OFFSET UNITYSDK_OFFSET(0x18403110)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLREFUSE_OFFSET UNITYSDK_OFFSET(0x18403130)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18402CE0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSELAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x184024B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEOVERSEAUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18404B90)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x184049D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREQUESTLAUNCHPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x184087D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONSHOWPROTOCOLTIMEOUT_OFFSET UNITYSDK_OFFSET(0x184082B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x18406C20)
#define MIHOYO_SDK_PROTOCOLMANAGER_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x184061F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18407660)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18400650)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETNEWPROCOTOL_OFFSET UNITYSDK_OFFSET(0x18401470)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETNEWUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x18401600)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETPROCOTOL_OFFSET UNITYSDK_OFFSET(0x184026C0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x18401B90)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18406A50)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18406880)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x183FF6F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLFALLBACK_OFFSET UNITYSDK_OFFSET(0x18400300)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_1_OFFSET UNITYSDK_OFFSET(0x183FED00)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_OFFSET UNITYSDK_OFFSET(0x183FECC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWMARKETINGPROTOCOL_OFFSET UNITYSDK_OFFSET(0x184066E0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18403AC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18402F60)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18405150)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x18403360)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLVIASHOWFLAG_OFFSET UNITYSDK_OFFSET(0x18408310)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x18400E90)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWTEENAGERUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x184056F0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWTHIRDPRIVACY_OFFSET UNITYSDK_OFFSET(0x18405C70)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x18404C90)
#define MIHOYO_SDK_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18409B10)
#define MIHOYO_SDK_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x18409AD0)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_B__60_0_OFFSET UNITYSDK_OFFSET(0x18409D40)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_0_OFFSET UNITYSDK_OFFSET(0x18409B60)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_1_OFFSET UNITYSDK_OFFSET(0x18409B70)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_2_OFFSET UNITYSDK_OFFSET(0x18409B80)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_3_OFFSET UNITYSDK_OFFSET(0x18409D20)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_4_OFFSET UNITYSDK_OFFSET(0x18409D10)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 7983;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x900);
		}
		::System::Action* OnAccept; // 0x10
		::MiHoYo::SDK::JSONNode* _launchProtocol; // 0x18
		::System::String* accountShowId; // 0x20
		::System::Diagnostics::Stopwatch* m_stopwatchProtocolRequest; // 0x28
		::MiHoYo::SDK::JSONNode* _protocol; // 0x30
		::System::Action* OnRefuse; // 0x38
		::System::Boolean m_bWaitingTimeout; // 0x40
		::System::Boolean m_bHasResponseReturn; // 0x41
		::System::Int32 _launchTimeout; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__CCTOR_OFFSET))();
		}

		::System::Boolean InitWithUserAgreementParameters(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_INITWITHUSERAGREEMENTPARAMETERS_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLauncherProtocol(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLauncherProtocol_1(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_1_OFFSET))(this, a1);
		}

		::System::Void ShowLauncherProtocolCompliance(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET))(this, a1, a2);
		}

		::System::Void ShowLauncherProtocolFallback(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLFALLBACK_OFFSET))(this, a1);
		}

		::System::Boolean CheckShowProtocol(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void OnAcceptLaunchProtocol(::System::Action_1<::System::String*>* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_OFFSET))(this, a1, a2);
		}

		::System::Void OnRefuseLaunchProtocol(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSELAUNCHPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void OnNoShowLaunchProtocol(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONNOSHOWLAUNCHPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void RequestProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTPROTOCOL_OFFSET))(this);
		}

		::System::Void OnGetProtocol(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETPROTOCOL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetProtocol()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOL_OFFSET))(this);
		}

		::System::Void SetProcotol(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETPROCOTOL_OFFSET))(this, a1);
		}

		::System::Void OnProtocol(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void SetUserProtocolFlag(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETUSERPROTOCOLFLAG_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::JSONNode* GetUserProtocolFlag(::System::String* a1)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETUSERPROTOCOLFLAG_OFFSET))(this, a1);
		}

		::System::String* GetProtocolVersionKey(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, a1);
		}

		::System::String* GetProtocolShowFlag(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAG_OFFSET))(this, a1);
		}

		static ::System::String* GetNewAccountShowId(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETNEWACCOUNTSHOWID_OFFSET))(a1);
		}

		::System::Boolean CheckOverseaShowProtocol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKOVERSEASHOWPROTOCOL_OFFSET))(this);
		}

		::System::Void OnProtocolAccept()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLACCEPT_OFFSET))(this);
		}

		::System::Void OnProtocolRefuse()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLREFUSE_OFFSET))(this);
		}

		::System::Void HideProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_HIDEPROTOCOL_OFFSET))(this);
		}

		::System::Boolean ShowProtocolPluginUI(::System::Boolean a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLPLUGINUI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideOverseaProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_HIDEOVERSEAPROTOCOL_OFFSET))(this);
		}

		::System::Boolean ShowOverseaProtocolPluginUI(::MiHoYo::SDK::ProtocolType a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET))(this, a1);
		}

		::System::Void ShowProtocol(::System::Boolean a1, ::System::Action* a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowOverseaProtocol(::MiHoYo::SDK::ProtocolType a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void DeleteProtocolFlagsByAid(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_DELETEPROTOCOLFLAGSBYAID_OFFSET))(this, a1);
		}

		::System::String* GetNewProtocolShowFlagByAidAndLanguage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETNEWPROTOCOLSHOWFLAGBYAIDANDLANGUAGE_OFFSET))(this, a1, a2);
		}

		::System::String* GetProtocolVersionKeyByAidAndLanguage(::System::String* a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEYBYAIDANDLANGUAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnAcceptUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnAcceptLaunchProtocol_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_1_OFFSET))(this);
		}

		::System::Void OnRefuseUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnAcceptOverseaUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTOVERSEAUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void OnRefuseOverseaUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEOVERSEAUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void ShowTeenagerUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWTEENAGERUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowThirdPrivacy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWTHIRDPRIVACY_OFFSET))(this);
		}

		::System::Void OpenProtocolWebView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_OPENPROTOCOLWEBVIEW_OFFSET))(this, a1);
		}

		::System::Void ShowMarketingProtocol(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWMARKETINGPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void ShowAccountUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowAccountPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void SetNewProcotol(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETNEWPROCOTOL_OFFSET))(this, a1, a2);
		}

		::System::Void SetNewUserProtocolFlag(::MiHoYo::SDK::JSONNode* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETNEWUSERPROTOCOLFLAG_OFFSET))(this, a1, a2);
		}

		::System::String* GetProtocolShowFlagKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAGKEY_OFFSET))(this);
		}

		::System::Void OnUniWebviewMessage(::MiHoYo::SDK::UniWebViewMessage a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, a1);
		}

		::System::Boolean CheckShowLaunchProtocol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOL_OFFSET))(this);
		}

		::System::Void CheckShowLaunchProtocolCompliance(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_OFFSET))(this, a1);
		}

		::System::Collections::IEnumerator* OnShowProtocolTimeout(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONSHOWPROTOCOLTIMEOUT_OFFSET))(this, a1);
		}

		::System::Void ShowProtocolViaShowFlag(::MiHoYo::SDK::JSONNode* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLVIASHOWFLAG_OFFSET))(this, a1, a2);
		}

		::System::Void RequestLaunchProtocol(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTLAUNCHPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void OnRequestLaunchProtocolVersion(::MiHoYo::SDK::NetworkResponseModel* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREQUESTLAUNCHPROTOCOLVERSION_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetLaunchProtocol(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETLAUNCHPROTOCOL_OFFSET))(this, a1);
		}

		::System::Boolean NeedUpdateProtocol(::MiHoYo::SDK::NetworkResponseModel* a1, ::MiHoYo::SDK::JSONNode*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::JSONNode*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NEEDUPDATEPROTOCOL_OFFSET))(this, a1, a2);
		}

		::MiHoYo::SDK::JSONNode* GetLaunchProtocolVersion()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSION_OFFSET))(this);
		}

		::MiHoYo::SDK::JSONNode* GetLaunchProtocolShowFlag()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAG_OFFSET))(this);
		}

		::System::String* GetLaunchProtocolVersionKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSIONKEY_OFFSET))(this);
		}

		::System::String* GetLaunchProtocolShowFlagKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAGKEY_OFFSET))(this);
		}

		::System::Int32 GetLaunchProtocolTimeoutBoxConfig()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLTIMEOUTBOXCONFIG_OFFSET))(this);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__35_0(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_0_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__35_1(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_1_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__35_2(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__35_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_4_OFFSET))(this);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__35_3(::System::String* a1, ::System::Action_1<::System::String*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__35_3_OFFSET))(this, a1, a2);
		}

		::System::Boolean _OnShowProtocolTimeout_b__60_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_B__60_0_OFFSET))(this);
		}
	};
}
