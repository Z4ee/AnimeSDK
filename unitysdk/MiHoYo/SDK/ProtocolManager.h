#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/ChannelType.h"
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

#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKCHANNELPRELOGINPROTOCOLACCEPTEDLOCALLY_OFFSET UNITYSDK_OFFSET(0x1B6D6B20)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKCHANNELPRELOGINPROTOCOLUPDATED_OFFSET UNITYSDK_OFFSET(0x1B6D6D40)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKOVERSEASHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D5FC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1B6D4080)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D44B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D2EA0)
#define MIHOYO_SDK_PROTOCOLMANAGER_DELETEPROTOCOLFLAGSBYAID_OFFSET UNITYSDK_OFFSET(0x1B6D9AD0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAGKEY_OFFSET UNITYSDK_OFFSET(0x1B6D7680)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x1B6DCE50)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLTIMEOUTBOXCONFIG_OFFSET UNITYSDK_OFFSET(0x1B6D3EA0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x1B6DF210)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETLAUNCHPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1B6DD5E0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETNEWACCOUNTSHOWID_OFFSET UNITYSDK_OFFSET(0x1B6D53B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETNEWPROTOCOLSHOWFLAGBYAIDANDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B6D9D60)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLCHANNELTYPE_OFFSET UNITYSDK_OFFSET(0x1B6D7B50)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAGKEY_OFFSET UNITYSDK_OFFSET(0x1B6D5110)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAG_OFFSET UNITYSDK_OFFSET(0x1B6D8B60)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEYBYAIDANDLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1B6D9DD0)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET UNITYSDK_OFFSET(0x1B6D8640)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D5750)
#define MIHOYO_SDK_PROTOCOLMANAGER_GETUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x1B6D5B70)
#define MIHOYO_SDK_PROTOCOLMANAGER_HIDEOVERSEAPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D94D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_HIDEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D8DD0)
#define MIHOYO_SDK_PROTOCOLMANAGER_INITWITHUSERAGREEMENTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1B6D2800)
#define MIHOYO_SDK_PROTOCOLMANAGER_NEEDUPDATEPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6DDD40)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_1_OFFSET UNITYSDK_OFFSET(0x1B6D9F40)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D71B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTOVERSEAUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6DA120)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6D9E40)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6DEA70)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONGETPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D7BF0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONNOSHOWLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D2CA0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLACCEPT_OFFSET UNITYSDK_OFFSET(0x1B6D8DB0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOLREFUSE_OFFSET UNITYSDK_OFFSET(0x1B6D8DC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D8730)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSELAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D7950)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEOVERSEAUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6DA250)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSEUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6DA030)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONREQUESTLAUNCHPROTOCOLVERSION_OFFSET UNITYSDK_OFFSET(0x1B6DD900)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONSHOWPROTOCOLTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1B6DD0E0)
#define MIHOYO_SDK_PROTOCOLMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1B6DC070)
#define MIHOYO_SDK_PROTOCOLMANAGER_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1B6DB810)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTLAUNCHPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6DC3D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_REQUESTPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D4810)
#define MIHOYO_SDK_PROTOCOLMANAGER_SAVECHANNELPRELOGINPROTOCOLAGREERECORD_OFFSET UNITYSDK_OFFSET(0x1B6D7140)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETNEWPROCOTOL_OFFSET UNITYSDK_OFFSET(0x1B6D5960)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETNEWUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x1B6D5C30)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETPROCOTOL_OFFSET UNITYSDK_OFFSET(0x1B6D7ED0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SETUSERPROTOCOLFLAG_OFFSET UNITYSDK_OFFSET(0x1B6D63B0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6DBF20)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6DBDD0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET UNITYSDK_OFFSET(0x1B6D3940)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLFALLBACK_OFFSET UNITYSDK_OFFSET(0x1B6D43D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_1_OFFSET UNITYSDK_OFFSET(0x1B6D2BC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D2B80)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWMARKETINGPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6DBCC0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B6D9680)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D8C50)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6DA8D0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1B6D8F80)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLVIASHOWFLAG_OFFSET UNITYSDK_OFFSET(0x1B6DD130)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1B6D51A0)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWTEENAGERUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6DAE70)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWTHIRDPRIVACY_OFFSET UNITYSDK_OFFSET(0x1B6DB340)
#define MIHOYO_SDK_PROTOCOLMANAGER_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1B6DA370)
#define MIHOYO_SDK_PROTOCOLMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B6DF540)
#define MIHOYO_SDK_PROTOCOLMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6DF4E0)
#define MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_B__64_0_OFFSET UNITYSDK_OFFSET(0x1B6DF760)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_0_OFFSET UNITYSDK_OFFSET(0x1B6DF5D0)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_1_OFFSET UNITYSDK_OFFSET(0x1B6DF5E0)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_2_OFFSET UNITYSDK_OFFSET(0x1B6DF5F0)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_3_OFFSET UNITYSDK_OFFSET(0x1B6DF740)
#define MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_4_OFFSET UNITYSDK_OFFSET(0x1B6DF730)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int ProtocolManager_TypeDefinitionIndex = 19802;

	class ProtocolManager : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::ProtocolManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::ProtocolManager**)Il2CppClass::FromTypeDefinitionIndex(ProtocolManager_TypeDefinitionIndex)->GetStaticField(0x96B0);
		}
		::MiHoYo::SDK::JSONNode* _protocol; // 0x10
		::System::Action* OnAccept; // 0x18
		::System::String* accountShowId; // 0x20
		::System::Action* OnRefuse; // 0x28
		::MiHoYo::SDK::JSONNode* _launchProtocol; // 0x30
		::System::Diagnostics::Stopwatch* m_stopwatchProtocolRequest; // 0x38
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

		::System::Boolean InitWithUserAgreementParameters(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_INITWITHUSERAGREEMENTPARAMETERS_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowLauncherProtocol(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowLauncherProtocol_1(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOL_1_OFFSET))(this, callback);
		}

		::System::Void ShowLauncherProtocolCompliance(::System::String* jsonString, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLCOMPLIANCE_OFFSET))(this, jsonString, callback);
		}

		::System::Void ShowLauncherProtocolFallback(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWLAUNCHERPROTOCOLFALLBACK_OFFSET))(this, callback);
		}

		::System::Boolean CheckShowProtocol(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWPROTOCOL_OFFSET))(this, data);
		}

		::System::Boolean CheckChannelPreLoginProtocolAcceptedLocally(::System::String* channelAccountId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKCHANNELPRELOGINPROTOCOLACCEPTEDLOCALLY_OFFSET))(this, channelAccountId);
		}

		::System::Boolean CheckChannelPreLoginProtocolUpdated(::System::String* channelAccountId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKCHANNELPRELOGINPROTOCOLUPDATED_OFFSET))(this, channelAccountId);
		}

		::System::Void SaveChannelPreLoginProtocolAgreeRecord(::System::String* channelAccountId)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SAVECHANNELPRELOGINPROTOCOLAGREERECORD_OFFSET))(this, channelAccountId);
		}

		::System::Void OnAcceptLaunchProtocol(::System::Action_1<::System::String*>* callback, ::System::Boolean isFallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONACCEPTLAUNCHPROTOCOL_OFFSET))(this, callback, isFallback);
		}

		::System::Void OnRefuseLaunchProtocol(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREFUSELAUNCHPROTOCOL_OFFSET))(this, callback);
		}

		::System::Void OnNoShowLaunchProtocol(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONNOSHOWLAUNCHPROTOCOL_OFFSET))(this, callback);
		}

		::System::Void RequestProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTPROTOCOL_OFFSET))(this);
		}

		::System::Void OnGetProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETPROTOCOL_OFFSET))(this, response);
		}

		::MiHoYo::SDK::JSONNode* GetProtocol()
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOL_OFFSET))(this);
		}

		::System::Void SetProcotol(::MiHoYo::SDK::JSONNode* protocol)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETPROCOTOL_OFFSET))(this, protocol);
		}

		::System::Void OnProtocol(::System::String* responseString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONPROTOCOL_OFFSET))(this, responseString);
		}

		::System::Void SetUserProtocolFlag(::System::String* combo_id)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETUSERPROTOCOLFLAG_OFFSET))(this, combo_id);
		}

		::MiHoYo::SDK::JSONNode* GetUserProtocolFlag(::System::String* combo_id)
		{
			return ((::MiHoYo::SDK::JSONNode*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETUSERPROTOCOLFLAG_OFFSET))(this, combo_id);
		}

		::System::String* GetProtocolVersionKey(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEY_OFFSET))(this, accountKey);
		}

		::System::String* GetProtocolShowFlag(::System::String* accountKey)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAG_OFFSET))(this, accountKey);
		}

		static ::System::String* GetNewAccountShowId(::MiHoYo::SDK::JSONNode* data)
		{
			return ((::System::String*(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETNEWACCOUNTSHOWID_OFFSET))(data);
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

		::System::Boolean ShowProtocolPluginUI(::System::Boolean isUpdate, ::System::Action* onAccept, ::System::Action* onRefuse)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLPLUGINUI_OFFSET))(this, isUpdate, onAccept, onRefuse);
		}

		::System::Void HideOverseaProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_HIDEOVERSEAPROTOCOL_OFFSET))(this);
		}

		::System::Boolean ShowOverseaProtocolPluginUI(::MiHoYo::SDK::ProtocolType protocolType)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOLPLUGINUI_OFFSET))(this, protocolType);
		}

		::System::Void ShowProtocol(::System::Boolean isUpdate, ::System::Action* onAccept, ::System::Action* onRefuse)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOL_OFFSET))(this, isUpdate, onAccept, onRefuse);
		}

		::System::Void ShowOverseaProtocol(::MiHoYo::SDK::ProtocolType protocolType)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::ProtocolType))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWOVERSEAPROTOCOL_OFFSET))(this, protocolType);
		}

		::System::Void DeleteProtocolFlagsByAid(::System::String* aid)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_DELETEPROTOCOLFLAGSBYAID_OFFSET))(this, aid);
		}

		::System::String* GetNewProtocolShowFlagByAidAndLanguage(::System::String* aid, ::System::String* shortLanguageCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETNEWPROTOCOLSHOWFLAGBYAIDANDLANGUAGE_OFFSET))(this, aid, shortLanguageCode);
		}

		::System::String* GetProtocolVersionKeyByAidAndLanguage(::System::String* aid, ::System::String* shortLanguageCode)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLVERSIONKEYBYAIDANDLANGUAGE_OFFSET))(this, aid, shortLanguageCode);
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

		::System::Void OpenProtocolWebView(::System::String* jsonString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_OPENPROTOCOLWEBVIEW_OFFSET))(this, jsonString);
		}

		::System::Void ShowMarketingProtocol(::System::String* marketingURL)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWMARKETINGPROTOCOL_OFFSET))(this, marketingURL);
		}

		::System::Void ShowAccountUserAgreement()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this);
		}

		::System::Void ShowAccountPrivacyProtocol()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWACCOUNTPRIVACYPROTOCOL_OFFSET))(this);
		}

		::System::Void SetNewProcotol(::MiHoYo::SDK::JSONNode* protocol, ::System::String* accountKey)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETNEWPROCOTOL_OFFSET))(this, protocol, accountKey);
		}

		::System::Void SetNewUserProtocolFlag(::MiHoYo::SDK::JSONNode* protocol, ::System::String* accountKey)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SETNEWUSERPROTOCOLFLAG_OFFSET))(this, protocol, accountKey);
		}

		::System::String* GetProtocolShowFlagKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLSHOWFLAGKEY_OFFSET))(this);
		}

		::System::Void OnUniWebviewMessage(::MiHoYo::SDK::UniWebViewMessage message)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONUNIWEBVIEWMESSAGE_OFFSET))(this, message);
		}

		static ::MiHoYo::SDK::ChannelType GetProtocolChannelType()
		{
			return ((::MiHoYo::SDK::ChannelType(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_GETPROTOCOLCHANNELTYPE_OFFSET))();
		}

		::System::Boolean CheckShowLaunchProtocol()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOL_OFFSET))(this);
		}

		::System::Void CheckShowLaunchProtocolCompliance(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_CHECKSHOWLAUNCHPROTOCOLCOMPLIANCE_OFFSET))(this, callback);
		}

		::System::Collections::IEnumerator* OnShowProtocolTimeout(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONSHOWPROTOCOLTIMEOUT_OFFSET))(this, callback);
		}

		::System::Void ShowProtocolViaShowFlag(::MiHoYo::SDK::JSONNode* jsonShowFlag, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_SHOWPROTOCOLVIASHOWFLAG_OFFSET))(this, jsonShowFlag, callback);
		}

		::System::Void RequestLaunchProtocol(::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_REQUESTLAUNCHPROTOCOL_OFFSET))(this, callback);
		}

		::System::Void OnRequestLaunchProtocolVersion(::MiHoYo::SDK::NetworkResponseModel* response, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONREQUESTLAUNCHPROTOCOLVERSION_OFFSET))(this, response, callback);
		}

		::System::Void OnGetLaunchProtocol(::MiHoYo::SDK::NetworkResponseModel* response)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_ONGETLAUNCHPROTOCOL_OFFSET))(this, response);
		}

		::System::Boolean NeedUpdateProtocol(::MiHoYo::SDK::NetworkResponseModel* response, ::MiHoYo::SDK::JSONNode*& jsonProtocol)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*, ::MiHoYo::SDK::JSONNode*&))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER_NEEDUPDATEPROTOCOL_OFFSET))(this, response, jsonProtocol);
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

		::System::Void _ShowOverseaProtocolPluginUI_b__38_0(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_0_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__38_1(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_1_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__38_2(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_2_OFFSET))(this, strArgs, callback);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__38_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_4_OFFSET))(this);
		}

		::System::Void _ShowOverseaProtocolPluginUI_b__38_3(::System::String* strArgs, ::System::Action_1<::System::String*>* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__SHOWOVERSEAPROTOCOLPLUGINUI_B__38_3_OFFSET))(this, strArgs, callback);
		}

		::System::Boolean _OnShowProtocolTimeout_b__64_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOCOLMANAGER__ONSHOWPROTOCOLTIMEOUT_B__64_0_OFFSET))(this);
		}
	};
}
