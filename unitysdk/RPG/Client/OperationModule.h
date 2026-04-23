#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MessageSituationType.h"

class Class_1_983E3C7FD339FC5A;
class Class_1_AC6C63F15E9794D3;
namespace RPG::Client { class AnnounceData; }
namespace RPG::Client { class AuthKeyData; }
namespace RPG::Client { class MessageSectionData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace RPG::Client::Promises { template <typename T> class Promise_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_OPERATIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC0BB50)
#define RPG_CLIENT_OPERATIONMODULE_GETAUTHKEYPROMISE_OFFSET UNITYSDK_OFFSET(0xAC0BC70)
#define RPG_CLIENT_OPERATIONMODULE_GET_ACTIVITYHASREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0B910)
#define RPG_CLIENT_OPERATIONMODULE_GET_AUTHKEYDATA_OFFSET UNITYSDK_OFFSET(0xAC0CA40)
#define RPG_CLIENT_OPERATIONMODULE_GET_IMHASREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0B8F0)
#define RPG_CLIENT_OPERATIONMODULE_GET_PLAYERRETURNINVITEHASREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0B980)
#define RPG_CLIENT_OPERATIONMODULE_GET_WEBTOOLHASREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0B9E0)
#define RPG_CLIENT_OPERATIONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xAC0BBA0)
#define RPG_CLIENT_OPERATIONMODULE_REPORTMESSAGESENT_OFFSET UNITYSDK_OFFSET(0xAC0C020)
#define RPG_CLIENT_OPERATIONMODULE_SENDUSECDKEYHTTPREQ_OFFSET UNITYSDK_OFFSET(0xAC0CB80)
#define RPG_CLIENT_OPERATIONMODULE_SETUPHTTPAUTHKEYPROMISED_OFFSET UNITYSDK_OFFSET(0xAC0BEE0)
#define RPG_CLIENT_OPERATIONMODULE_SET_AUTHKEYDATA_OFFSET UNITYSDK_OFFSET(0xAC0CA50)
#define RPG_CLIENT_OPERATIONMODULE_SET_IMHASREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0B900)
#define RPG_CLIENT_OPERATIONMODULE_SET_WEBTOOLHASREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0B9F0)
#define RPG_CLIENT_OPERATIONMODULE_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xAC0ACF0)
#define RPG_CLIENT_OPERATIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC0C7B0)
#define RPG_CLIENT_OPERATIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC0C070)
#define RPG_CLIENT_OPERATIONMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xAC0D420)
#define RPG_CLIENT_OPERATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xAC0BA00)
#define RPG_CLIENT_OPERATIONMODULE__GETACTIVITYPLAYERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xAC0AF90)
#define RPG_CLIENT_OPERATIONMODULE__GETACTIVITYSERVERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xAC0B0A0)
#define RPG_CLIENT_OPERATIONMODULE__GETIMREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xAC0AE80)
#define RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITEPLAYERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xAC0B1B0)
#define RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITESERVERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xAC0B2C0)
#define RPG_CLIENT_OPERATIONMODULE__GETWEBTOOLREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xAC0B3D0)
#define RPG_CLIENT_OPERATIONMODULE__ONGETAUTHKEYSCRSP_OFFSET UNITYSDK_OFFSET(0xAC0C170)
#define RPG_CLIENT_OPERATIONMODULE__ONMESSAGESITUATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xAC0C990)
#define RPG_CLIENT_OPERATIONMODULE__ONREPORTOPTIONCHOSEN_OFFSET UNITYSDK_OFFSET(0xAC0C8D0)
#define RPG_CLIENT_OPERATIONMODULE__ONSERVERANNOUNCENOTIFY_OFFSET UNITYSDK_OFFSET(0xAC0C3B0)
#define RPG_CLIENT_OPERATIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xAC0B550)
#define RPG_CLIENT_OPERATIONMODULE__ONUSECDKEYFAILED_OFFSET UNITYSDK_OFFSET(0xAC0D3A0)
#define RPG_CLIENT_OPERATIONMODULE__ONUSECDKEY_OFFSET UNITYSDK_OFFSET(0xAC0D340)
#define RPG_CLIENT_OPERATIONMODULE__PREPAREHTTPREQUEST_OFFSET UNITYSDK_OFFSET(0xAC0CA60)
#define RPG_CLIENT_OPERATIONMODULE__REDDOTADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC0B4E0)
#define RPG_CLIENT_OPERATIONMODULE__REDDOTDISPOSE_OFFSET UNITYSDK_OFFSET(0xAC0AC40)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC0D470)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xAC0D480)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC0D540)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xAC0D4E0)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule_TypeDefinitionIndex = 61173;

	class OperationModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::String** StaticGet_CDKEY_URL_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x5DB90);
		}
		static ::System::String** StaticGet_CDKEY_APPID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x5DB98);
		}
		static ::System::String** StaticGet_CDKEY_URL_TO_USE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x5DBA0);
		}
		static ::System::String** StaticGet_CDKEY_AUTH_KEY_VERSION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x5DBA8);
		}
		static ::System::String** StaticGet_CDKEY_SIGN_TYPE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x5DBB0);
		}
		::RPG::Client::AuthKeyData* _AuthKeyData_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Promises::Promise_1<::System::String*>*>* _AuthKeyPromises; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityPlayerRedDotContentIDs; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityServerRedDotContentIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::AnnounceData*>* AnnounceDataList; // 0x30
		::System::Boolean _PlayerReturnInviteHasServerRedDot; // 0x38
		::System::Boolean _PlayerReturnInviteHasPlayerRedDot; // 0x39
		::System::Boolean _IMHasRedDot_k__BackingField; // 0x3A
		::System::Boolean _WebToolHasRedDot_k__BackingField; // 0x3B
		::RPG::Client::MessageSituationType _MessageSituationType; // 0x3C
		::System::Int32 _IMRedDotType; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__CCTOR_OFFSET))();
		}

		::System::Void _RedDotDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__REDDOTDISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDot(::System::UInt32 redDotType, ::System::UInt32 contentID, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_UPDATEREDDOT_OFFSET))(this, redDotType, contentID, show);
		}

		::System::Int32 _GetIMRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETIMREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetActivityPlayerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETACTIVITYPLAYERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetActivityServerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETACTIVITYSERVERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetPlayerReturnInvitePlayerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITEPLAYERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetPlayerReturnInviteServerRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITESERVERREDDOTTYPE_OFFSET))(this);
		}

		::System::Int32 _GetWebToolRedDotType()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__GETWEBTOOLREDDOTTYPE_OFFSET))(this);
		}

		::System::Void _RedDotAddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__REDDOTADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnSetRedPointStatusScNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Boolean get_IMHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_IMHASREDDOT_OFFSET))(this);
		}

		::System::Void set_IMHasRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_IMHASREDDOT_OFFSET))(this, value);
		}

		::System::Boolean get_ActivityHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_ACTIVITYHASREDDOT_OFFSET))(this);
		}

		::System::Boolean get_PlayerReturnInviteHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_PLAYERRETURNINVITEHASREDDOT_OFFSET))(this);
		}

		::System::Boolean get_WebToolHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_WEBTOOLHASREDDOT_OFFSET))(this);
		}

		::System::Void set_WebToolHasRedDot(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_WEBTOOLHASREDDOT_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::String*>* GetAuthKeyPromise(::System::String* appID, ::System::String* signType, ::System::String* version)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GETAUTHKEYPROMISE_OFFSET))(this, appID, signType, version);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_AC6C63F15E9794D3*>* SetupHttpAuthKeyPromised(::Class_1_AC6C63F15E9794D3* req, ::System::String* appID, ::System::String* signType, ::System::String* authKeyVer)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_AC6C63F15E9794D3*>*(*)(::PVOID, ::Class_1_AC6C63F15E9794D3*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SETUPHTTPAUTHKEYPROMISED_OFFSET))(this, req, appID, signType, authKeyVer);
		}

		::System::Void ReportMessageSent(::RPG::Client::MessageSectionData* sectionData, ::System::UInt32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_REPORTMESSAGESENT_OFFSET))(this, sectionData, itemID);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetAuthkeyScRsp(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONGETAUTHKEYSCRSP_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _OnServerAnnounceNotify(::System::UInt16 cmd, ::System::Object* rspObject)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONSERVERANNOUNCENOTIFY_OFFSET))(this, cmd, rspObject);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnReportOptionChosen(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONREPORTOPTIONCHOSEN_OFFSET))(this, param);
		}

		::System::Void _OnMessageSituationChanged(::System::Object* param)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONMESSAGESITUATIONCHANGED_OFFSET))(this, param);
		}

		::RPG::Client::AuthKeyData* get_AuthKeyData()
		{
			return ((::RPG::Client::AuthKeyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_AUTHKEYDATA_OFFSET))(this);
		}

		::System::Void set_AuthKeyData(::RPG::Client::AuthKeyData* value)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AuthKeyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_AUTHKEYDATA_OFFSET))(this, value);
		}

		static ::RPG::Client::Promises::IPromise_1<::Class_1_AC6C63F15E9794D3*>* _PrepareHttpRequest(::Class_1_AC6C63F15E9794D3* req, ::System::String* appID, ::System::String* signType, ::System::String* authKeyVer)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_AC6C63F15E9794D3*>*(*)(::Class_1_AC6C63F15E9794D3*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__PREPAREHTTPREQUEST_OFFSET))(req, appID, signType, authKeyVer);
		}

		::System::Void SendUseCDKeyHttpReq(::System::String* cdKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SENDUSECDKEYHTTPREQ_OFFSET))(this, cdKey);
		}

		::System::Void _OnUseCDKey(::Class_1_983E3C7FD339FC5A* response)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_983E3C7FD339FC5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONUSECDKEY_OFFSET))(this, response);
		}

		::System::Void _OnUseCDKeyFailed(::System::Exception* ex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONUSECDKEYFAILED_OFFSET))(this, ex);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy_OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void __iFixBaseProxy__AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET))(this);
		}
	};
}
