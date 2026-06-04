#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/Client/MessageSituationType.h"

class Class_1_92B1BD6FC8375724;
class Class_1_D8AE373904B194A5;
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

#define RPG_CLIENT_OPERATIONMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC31A870)
#define RPG_CLIENT_OPERATIONMODULE_GETAUTHKEYPROMISE_OFFSET UNITYSDK_OFFSET(0xC31A980)
#define RPG_CLIENT_OPERATIONMODULE_GET_ACTIVITYHASREDDOT_OFFSET UNITYSDK_OFFSET(0xC31A630)
#define RPG_CLIENT_OPERATIONMODULE_GET_AUTHKEYDATA_OFFSET UNITYSDK_OFFSET(0xC31B910)
#define RPG_CLIENT_OPERATIONMODULE_GET_IMHASREDDOT_OFFSET UNITYSDK_OFFSET(0xC31A610)
#define RPG_CLIENT_OPERATIONMODULE_GET_PLAYERRETURNINVITEHASREDDOT_OFFSET UNITYSDK_OFFSET(0xC31A6A0)
#define RPG_CLIENT_OPERATIONMODULE_GET_WEBTOOLHASREDDOT_OFFSET UNITYSDK_OFFSET(0xC31A700)
#define RPG_CLIENT_OPERATIONMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC31A8C0)
#define RPG_CLIENT_OPERATIONMODULE_REPORTMESSAGESENT_OFFSET UNITYSDK_OFFSET(0xC31AD30)
#define RPG_CLIENT_OPERATIONMODULE_SENDUSECDKEYHTTPREQ_OFFSET UNITYSDK_OFFSET(0xC31BA50)
#define RPG_CLIENT_OPERATIONMODULE_SETUPHTTPAUTHKEYPROMISED_OFFSET UNITYSDK_OFFSET(0xC31ABE0)
#define RPG_CLIENT_OPERATIONMODULE_SET_AUTHKEYDATA_OFFSET UNITYSDK_OFFSET(0xC31B920)
#define RPG_CLIENT_OPERATIONMODULE_SET_IMHASREDDOT_OFFSET UNITYSDK_OFFSET(0xC31A620)
#define RPG_CLIENT_OPERATIONMODULE_SET_WEBTOOLHASREDDOT_OFFSET UNITYSDK_OFFSET(0xC31A710)
#define RPG_CLIENT_OPERATIONMODULE_UPDATEREDDOT_OFFSET UNITYSDK_OFFSET(0xC3198C0)
#define RPG_CLIENT_OPERATIONMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC31B610)
#define RPG_CLIENT_OPERATIONMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC31AD80)
#define RPG_CLIENT_OPERATIONMODULE__CCTOR_OFFSET UNITYSDK_OFFSET(0xC31C4A0)
#define RPG_CLIENT_OPERATIONMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xC31A720)
#define RPG_CLIENT_OPERATIONMODULE__GETACTIVITYPLAYERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xC319C40)
#define RPG_CLIENT_OPERATIONMODULE__GETACTIVITYSERVERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xC319D50)
#define RPG_CLIENT_OPERATIONMODULE__GETIMREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xC319B30)
#define RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITEPLAYERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xC319E60)
#define RPG_CLIENT_OPERATIONMODULE__GETPLAYERRETURNINVITESERVERREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xC319F70)
#define RPG_CLIENT_OPERATIONMODULE__GETWEBTOOLREDDOTTYPE_OFFSET UNITYSDK_OFFSET(0xC31A080)
#define RPG_CLIENT_OPERATIONMODULE__ONGETAUTHKEYSCRSP_OFFSET UNITYSDK_OFFSET(0xC31AF20)
#define RPG_CLIENT_OPERATIONMODULE__ONMESSAGESITUATIONCHANGED_OFFSET UNITYSDK_OFFSET(0xC31B830)
#define RPG_CLIENT_OPERATIONMODULE__ONREPORTOPTIONCHOSEN_OFFSET UNITYSDK_OFFSET(0xC31B770)
#define RPG_CLIENT_OPERATIONMODULE__ONSERVERANNOUNCENOTIFY_OFFSET UNITYSDK_OFFSET(0xC31B150)
#define RPG_CLIENT_OPERATIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET UNITYSDK_OFFSET(0xC31A270)
#define RPG_CLIENT_OPERATIONMODULE__ONUSECDKEYFAILED_OFFSET UNITYSDK_OFFSET(0xC31C420)
#define RPG_CLIENT_OPERATIONMODULE__ONUSECDKEY_OFFSET UNITYSDK_OFFSET(0xC31C3C0)
#define RPG_CLIENT_OPERATIONMODULE__PREPAREHTTPREQUEST_OFFSET UNITYSDK_OFFSET(0xC31B930)
#define RPG_CLIENT_OPERATIONMODULE__REDDOTADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC31A190)
#define RPG_CLIENT_OPERATIONMODULE__REDDOTDISPOSE_OFFSET UNITYSDK_OFFSET(0xC319830)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC31C4F0)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0xC31C500)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0xC31C5C0)
#define RPG_CLIENT_OPERATIONMODULE___IFIXBASEPROXY__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0xC31C560)

namespace RPG::Client
{
	inline static constexpr unsigned int OperationModule_TypeDefinitionIndex = 62097;

	class OperationModule : public ::RPG::Client::BaseModule
	{
	public:
		static ::System::String** StaticGet_CDKEY_APPID()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x68770);
		}
		static ::System::String** StaticGet_CDKEY_URL_TO_USE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x68778);
		}
		static ::System::String** StaticGet_CDKEY_AUTH_KEY_VERSION()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x68780);
		}
		static ::System::String** StaticGet_CDKEY_SIGN_TYPE()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x68788);
		}
		static ::System::String** StaticGet_CDKEY_URL_KEY()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(OperationModule_TypeDefinitionIndex)->GetStaticField(0x68790);
		}
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::Promises::Promise_1<::System::String*>*>* _AuthKeyPromises; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityServerRedDotContentIDs; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::AnnounceData*>* AnnounceDataList; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _ActivityPlayerRedDotContentIDs; // 0x28
		::RPG::Client::AuthKeyData* _AuthKeyData_k__BackingField; // 0x30
		::System::Int32 _IMRedDotType; // 0x38
		::System::Boolean _PlayerReturnInviteHasPlayerRedDot; // 0x3C
		::System::Boolean _PlayerReturnInviteHasServerRedDot; // 0x3D
		::System::Boolean _IMHasRedDot_k__BackingField; // 0x3E
		::System::Boolean _WebToolHasRedDot_k__BackingField; // 0x3F
		::RPG::Client::MessageSituationType _MessageSituationType; // 0x40

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

		::System::Void UpdateRedDot(::System::UInt32 a1, ::System::UInt32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_UPDATEREDDOT_OFFSET))(this, a1, a2, a3);
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

		::System::Void _OnSetRedPointStatusScNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONSETREDPOINTSTATUSSCNOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IMHasRedDot()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_IMHASREDDOT_OFFSET))(this);
		}

		::System::Void set_IMHasRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_IMHASREDDOT_OFFSET))(this, a1);
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

		::System::Void set_WebToolHasRedDot(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_WEBTOOLHASREDDOT_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_ONRECONNECT_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise_1<::System::String*>* GetAuthKeyPromise(::System::String* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::RPG::Client::Promises::Promise_1<::System::String*>*(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GETAUTHKEYPROMISE_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::Promises::IPromise_1<::Class_1_92B1BD6FC8375724*>* SetupHttpAuthKeyPromised(::Class_1_92B1BD6FC8375724* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_92B1BD6FC8375724*>*(*)(::PVOID, ::Class_1_92B1BD6FC8375724*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SETUPHTTPAUTHKEYPROMISED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ReportMessageSent(::RPG::Client::MessageSectionData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MessageSectionData*, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_REPORTMESSAGESENT_OFFSET))(this, a1, a2);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void _OnGetAuthkeyScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONGETAUTHKEYSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnServerAnnounceNotify(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONSERVERANNOUNCENOTIFY_OFFSET))(this, a1, a2);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnReportOptionChosen(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONREPORTOPTIONCHOSEN_OFFSET))(this, a1);
		}

		::System::Void _OnMessageSituationChanged(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONMESSAGESITUATIONCHANGED_OFFSET))(this, a1);
		}

		::RPG::Client::AuthKeyData* get_AuthKeyData()
		{
			return ((::RPG::Client::AuthKeyData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_GET_AUTHKEYDATA_OFFSET))(this);
		}

		::System::Void set_AuthKeyData(::RPG::Client::AuthKeyData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AuthKeyData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SET_AUTHKEYDATA_OFFSET))(this, a1);
		}

		static ::RPG::Client::Promises::IPromise_1<::Class_1_92B1BD6FC8375724*>* _PrepareHttpRequest(::Class_1_92B1BD6FC8375724* a1, ::System::String* a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::RPG::Client::Promises::IPromise_1<::Class_1_92B1BD6FC8375724*>*(*)(::Class_1_92B1BD6FC8375724*, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__PREPAREHTTPREQUEST_OFFSET))(a1, a2, a3, a4);
		}

		::System::Void SendUseCDKeyHttpReq(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE_SENDUSECDKEYHTTPREQ_OFFSET))(this, a1);
		}

		::System::Void _OnUseCDKey(::Class_1_D8AE373904B194A5* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D8AE373904B194A5*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONUSECDKEY_OFFSET))(this, a1);
		}

		::System::Void _OnUseCDKeyFailed(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_OPERATIONMODULE__ONUSECDKEYFAILED_OFFSET))(this, a1);
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
