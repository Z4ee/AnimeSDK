#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Sessions { class ActiveSession; }
namespace Epic::OnlineServices::Sessions { class AddNotifyJoinSessionAcceptedOptions; }
namespace Epic::OnlineServices::Sessions { class AddNotifySessionInviteAcceptedOptions; }
namespace Epic::OnlineServices::Sessions { class AddNotifySessionInviteReceivedOptions; }
namespace Epic::OnlineServices::Sessions { class CopyActiveSessionHandleOptions; }
namespace Epic::OnlineServices::Sessions { class CopySessionHandleByInviteIdOptions; }
namespace Epic::OnlineServices::Sessions { class CopySessionHandleByUiEventIdOptions; }
namespace Epic::OnlineServices::Sessions { class CopySessionHandleForPresenceOptions; }
namespace Epic::OnlineServices::Sessions { class CreateSessionModificationOptions; }
namespace Epic::OnlineServices::Sessions { class CreateSessionSearchOptions; }
namespace Epic::OnlineServices::Sessions { class DestroySessionOptions; }
namespace Epic::OnlineServices::Sessions { class DumpSessionStateOptions; }
namespace Epic::OnlineServices::Sessions { class EndSessionOptions; }
namespace Epic::OnlineServices::Sessions { class GetInviteCountOptions; }
namespace Epic::OnlineServices::Sessions { class GetInviteIdByIndexOptions; }
namespace Epic::OnlineServices::Sessions { class IsUserInSessionOptions; }
namespace Epic::OnlineServices::Sessions { class JoinSessionOptions; }
namespace Epic::OnlineServices::Sessions { class OnDestroySessionCallback; }
namespace Epic::OnlineServices::Sessions { class OnEndSessionCallback; }
namespace Epic::OnlineServices::Sessions { class OnJoinSessionAcceptedCallback; }
namespace Epic::OnlineServices::Sessions { class OnJoinSessionCallback; }
namespace Epic::OnlineServices::Sessions { class OnQueryInvitesCallback; }
namespace Epic::OnlineServices::Sessions { class OnRegisterPlayersCallback; }
namespace Epic::OnlineServices::Sessions { class OnRejectInviteCallback; }
namespace Epic::OnlineServices::Sessions { class OnSendInviteCallback; }
namespace Epic::OnlineServices::Sessions { class OnSessionInviteAcceptedCallback; }
namespace Epic::OnlineServices::Sessions { class OnSessionInviteReceivedCallback; }
namespace Epic::OnlineServices::Sessions { class OnStartSessionCallback; }
namespace Epic::OnlineServices::Sessions { class OnUnregisterPlayersCallback; }
namespace Epic::OnlineServices::Sessions { class OnUpdateSessionCallback; }
namespace Epic::OnlineServices::Sessions { class QueryInvitesOptions; }
namespace Epic::OnlineServices::Sessions { class RegisterPlayersOptions; }
namespace Epic::OnlineServices::Sessions { class RejectInviteOptions; }
namespace Epic::OnlineServices::Sessions { class SendInviteOptions; }
namespace Epic::OnlineServices::Sessions { class SessionDetails; }
namespace Epic::OnlineServices::Sessions { class SessionModification; }
namespace Epic::OnlineServices::Sessions { class SessionSearch; }
namespace Epic::OnlineServices::Sessions { class StartSessionOptions; }
namespace Epic::OnlineServices::Sessions { class UnregisterPlayersOptions; }
namespace Epic::OnlineServices::Sessions { class UpdateSessionModificationOptions; }
namespace Epic::OnlineServices::Sessions { class UpdateSessionOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYJOINSESSIONACCEPTED_OFFSET UNITYSDK_OFFSET(0x83B45F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x83B4870)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x83B4AF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYACTIVESESSIONHANDLE_OFFSET UNITYSDK_OFFSET(0x83B4D70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYINVITEID_OFFSET UNITYSDK_OFFSET(0x83B4F80)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYUIEVENTID_OFFSET UNITYSDK_OFFSET(0x83B5190)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEFORPRESENCE_OFFSET UNITYSDK_OFFSET(0x83B5320)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONMODIFICATION_OFFSET UNITYSDK_OFFSET(0x83B5510)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONSEARCH_OFFSET UNITYSDK_OFFSET(0x83B56A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DESTROYSESSION_OFFSET UNITYSDK_OFFSET(0x83B5830)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DUMPSESSIONSTATE_OFFSET UNITYSDK_OFFSET(0x83B5A80)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ENDSESSION_OFFSET UNITYSDK_OFFSET(0x83B5C80)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITECOUNT_OFFSET UNITYSDK_OFFSET(0x83B5ED0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x83B60C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ISUSERINSESSION_OFFSET UNITYSDK_OFFSET(0x83B6410)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_JOINSESSION_OFFSET UNITYSDK_OFFSET(0x83B6570)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONDESTROYSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B3E80)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONENDSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B3F10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B3FA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4030)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B40C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4150)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B41E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4270)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4300)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4390)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSTARTSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4420)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUNREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B44B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUPDATESESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x83B4540)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_QUERYINVITES_OFFSET UNITYSDK_OFFSET(0x83B6730)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REGISTERPLAYERS_OFFSET UNITYSDK_OFFSET(0x83B6970)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REJECTINVITE_OFFSET UNITYSDK_OFFSET(0x83B6B30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYJOINSESSIONACCEPTED_OFFSET UNITYSDK_OFFSET(0x83B6CF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x83B6DD0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x83B6EB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_SENDINVITE_OFFSET UNITYSDK_OFFSET(0x83B6F90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_STARTSESSION_OFFSET UNITYSDK_OFFSET(0x83B7150)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UNREGISTERPLAYERS_OFFSET UNITYSDK_OFFSET(0x83B73A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSIONMODIFICATION_OFFSET UNITYSDK_OFFSET(0x83B77A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSION_OFFSET UNITYSDK_OFFSET(0x83B7560)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x83B45E0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x83B45D0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionsInterface_TypeDefinitionIndex = 35555;

	class SessionsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyjoinsessionacceptedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifysessioninviteacceptedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifysessioninvitereceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AttributedataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopyactivesessionhandleApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopysessionhandlebyinviteidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopysessionhandlebyuieventidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopysessionhandleforpresenceApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CreatesessionmodificationApiLatest = 0x3; // 0x0
		// static const ::System::Int32 CreatesessionsearchApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DestroysessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DumpsessionstateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 EndsessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetinvitecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetinviteidbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 InviteidMaxLength = 0x40; // 0x0
		// static const ::System::Int32 IsuserinsessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 JoinsessionApiLatest = 0x2; // 0x0
		// static const ::System::Int32 MaxSearchResults = 0xC8; // 0x0
		// static const ::System::Int32 Maxregisteredplayers = 0x3E8; // 0x0
		// static const ::System::Int32 QueryinvitesApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RegisterplayersApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RejectinviteApiLatest = 0x1; // 0x0
		// static const ::System::String* SearchBucketId; // 0x0
		// static const ::System::String* SearchEmptyServersOnly; // 0x0
		// static const ::System::String* SearchMinslotsavailable; // 0x0
		// static const ::System::String* SearchNonemptyServersOnly; // 0x0
		// static const ::System::Int32 SendinviteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionattributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SessionattributedataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 StartsessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UnregisterplayersApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatesessionApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatesessionmodificationApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyJoinSessionAccepted(::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYJOINSESSIONACCEPTED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifySessionInviteAccepted(::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITEACCEPTED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifySessionInviteReceived(::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITERECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result CopyActiveSessionHandle(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions* options, ::Epic::OnlineServices::Sessions::ActiveSession*& outSessionHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions*, ::Epic::OnlineServices::Sessions::ActiveSession*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYACTIVESESSIONHANDLE_OFFSET))(this, options, outSessionHandle);
		}

		::Epic::OnlineServices::Result CopySessionHandleByInviteId(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions* options, ::Epic::OnlineServices::Sessions::SessionDetails*& outSessionHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYINVITEID_OFFSET))(this, options, outSessionHandle);
		}

		::Epic::OnlineServices::Result CopySessionHandleByUiEventId(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions* options, ::Epic::OnlineServices::Sessions::SessionDetails*& outSessionHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYUIEVENTID_OFFSET))(this, options, outSessionHandle);
		}

		::Epic::OnlineServices::Result CopySessionHandleForPresence(::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions* options, ::Epic::OnlineServices::Sessions::SessionDetails*& outSessionHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEFORPRESENCE_OFFSET))(this, options, outSessionHandle);
		}

		::Epic::OnlineServices::Result CreateSessionModification(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions* options, ::Epic::OnlineServices::Sessions::SessionModification*& outSessionModificationHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionModificationOptions*, ::Epic::OnlineServices::Sessions::SessionModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONMODIFICATION_OFFSET))(this, options, outSessionModificationHandle);
		}

		::Epic::OnlineServices::Result CreateSessionSearch(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions* options, ::Epic::OnlineServices::Sessions::SessionSearch*& outSessionSearchHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions*, ::Epic::OnlineServices::Sessions::SessionSearch*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONSEARCH_OFFSET))(this, options, outSessionSearchHandle);
		}

		::System::Void DestroySession(::Epic::OnlineServices::Sessions::DestroySessionOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::DestroySessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DESTROYSESSION_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result DumpSessionState(::Epic::OnlineServices::Sessions::DumpSessionStateOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::DumpSessionStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DUMPSESSIONSTATE_OFFSET))(this, options);
		}

		::System::Void EndSession(::Epic::OnlineServices::Sessions::EndSessionOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnEndSessionCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnEndSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ENDSESSION_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt32 GetInviteCount(::Epic::OnlineServices::Sessions::GetInviteCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sessions::GetInviteCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITECOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetInviteIdByIndex(::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions* options, ::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITEIDBYINDEX_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result IsUserInSession(::Epic::OnlineServices::Sessions::IsUserInSessionOptions* options)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::IsUserInSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ISUSERINSESSION_OFFSET))(this, options);
		}

		::System::Void JoinSession(::Epic::OnlineServices::Sessions::JoinSessionOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_JOINSESSION_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryInvites(::Epic::OnlineServices::Sessions::QueryInvitesOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::QueryInvitesOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_QUERYINVITES_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RegisterPlayers(::Epic::OnlineServices::Sessions::RegisterPlayersOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RegisterPlayersOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REGISTERPLAYERS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RejectInvite(::Epic::OnlineServices::Sessions::RejectInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RejectInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REJECTINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyJoinSessionAccepted(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYJOINSESSIONACCEPTED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifySessionInviteAccepted(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITEACCEPTED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifySessionInviteReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITERECEIVED_OFFSET))(this, inId);
		}

		::System::Void SendInvite(::Epic::OnlineServices::Sessions::SendInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnSendInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SendInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSendInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_SENDINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void StartSession(::Epic::OnlineServices::Sessions::StartSessionOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnStartSessionCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::StartSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnStartSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_STARTSESSION_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UnregisterPlayers(::Epic::OnlineServices::Sessions::UnregisterPlayersOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UnregisterPlayersOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UNREGISTERPLAYERS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UpdateSession(::Epic::OnlineServices::Sessions::UpdateSessionOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSION_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result UpdateSessionModification(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions* options, ::Epic::OnlineServices::Sessions::SessionModification*& outSessionModificationHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions*, ::Epic::OnlineServices::Sessions::SessionModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSIONMODIFICATION_OFFSET))(this, options, outSessionModificationHandle);
		}

		static ::System::Void OnDestroySessionCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONDESTROYSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnEndSessionCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONENDSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnJoinSessionAcceptedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnJoinSessionCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryInvitesCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRegisterPlayersCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRejectInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSendInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSessionInviteAcceptedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSessionInviteReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnStartSessionCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSTARTSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUnregisterPlayersCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUNREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUpdateSessionCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUPDATESESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
