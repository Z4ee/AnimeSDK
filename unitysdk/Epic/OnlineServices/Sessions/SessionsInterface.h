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

#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYJOINSESSIONACCEPTED_OFFSET UNITYSDK_OFFSET(0xB154FF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0xB1552A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0xB155550)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYACTIVESESSIONHANDLE_OFFSET UNITYSDK_OFFSET(0xB155800)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYINVITEID_OFFSET UNITYSDK_OFFSET(0xB155A10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYUIEVENTID_OFFSET UNITYSDK_OFFSET(0xB155C20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEFORPRESENCE_OFFSET UNITYSDK_OFFSET(0xB155DB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONMODIFICATION_OFFSET UNITYSDK_OFFSET(0xB155FA0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONSEARCH_OFFSET UNITYSDK_OFFSET(0xB156130)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DESTROYSESSION_OFFSET UNITYSDK_OFFSET(0xB1562C0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DUMPSESSIONSTATE_OFFSET UNITYSDK_OFFSET(0xB156530)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ENDSESSION_OFFSET UNITYSDK_OFFSET(0xB156730)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITECOUNT_OFFSET UNITYSDK_OFFSET(0xB1569A0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0xB156B90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ISUSERINSESSION_OFFSET UNITYSDK_OFFSET(0xB156ED0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_JOINSESSION_OFFSET UNITYSDK_OFFSET(0xB157030)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONDESTROYSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB1547B0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONENDSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154850)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB1548F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154990)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154A30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154AD0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154B70)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154C10)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154CB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154D50)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSTARTSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154DF0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUNREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154E90)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUPDATESESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xB154F30)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_QUERYINVITES_OFFSET UNITYSDK_OFFSET(0xB157210)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REGISTERPLAYERS_OFFSET UNITYSDK_OFFSET(0xB157470)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REJECTINVITE_OFFSET UNITYSDK_OFFSET(0xB157650)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYJOINSESSIONACCEPTED_OFFSET UNITYSDK_OFFSET(0xB157830)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0xB157910)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0xB1579F0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_SENDINVITE_OFFSET UNITYSDK_OFFSET(0xB157AD0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_STARTSESSION_OFFSET UNITYSDK_OFFSET(0xB157CB0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UNREGISTERPLAYERS_OFFSET UNITYSDK_OFFSET(0xB157F20)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSIONMODIFICATION_OFFSET UNITYSDK_OFFSET(0xB158360)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSION_OFFSET UNITYSDK_OFFSET(0xB158100)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xB154FE0)
#define EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xB154FD0)

namespace Epic::OnlineServices::Sessions
{
	inline static constexpr unsigned int SessionsInterface_TypeDefinitionIndex = 45227;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyJoinSessionAccepted(::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifyJoinSessionAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnJoinSessionAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYJOINSESSIONACCEPTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifySessionInviteAccepted(::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifySessionInviteAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITEACCEPTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifySessionInviteReceived(::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Sessions::AddNotifySessionInviteReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSessionInviteReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ADDNOTIFYSESSIONINVITERECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyActiveSessionHandle(::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions* a1, ::Epic::OnlineServices::Sessions::ActiveSession*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopyActiveSessionHandleOptions*, ::Epic::OnlineServices::Sessions::ActiveSession*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYACTIVESESSIONHANDLE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopySessionHandleByInviteId(::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions* a1, ::Epic::OnlineServices::Sessions::SessionDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleByInviteIdOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYINVITEID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopySessionHandleByUiEventId(::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions* a1, ::Epic::OnlineServices::Sessions::SessionDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleByUiEventIdOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEBYUIEVENTID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopySessionHandleForPresence(::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions* a1, ::Epic::OnlineServices::Sessions::SessionDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CopySessionHandleForPresenceOptions*, ::Epic::OnlineServices::Sessions::SessionDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_COPYSESSIONHANDLEFORPRESENCE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CreateSessionModification(::Epic::OnlineServices::Sessions::CreateSessionModificationOptions* a1, ::Epic::OnlineServices::Sessions::SessionModification*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionModificationOptions*, ::Epic::OnlineServices::Sessions::SessionModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONMODIFICATION_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CreateSessionSearch(::Epic::OnlineServices::Sessions::CreateSessionSearchOptions* a1, ::Epic::OnlineServices::Sessions::SessionSearch*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::CreateSessionSearchOptions*, ::Epic::OnlineServices::Sessions::SessionSearch*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_CREATESESSIONSEARCH_OFFSET))(this, a1, a2);
		}

		::System::Void DestroySession(::Epic::OnlineServices::Sessions::DestroySessionOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::DestroySessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnDestroySessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DESTROYSESSION_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result DumpSessionState(::Epic::OnlineServices::Sessions::DumpSessionStateOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::DumpSessionStateOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_DUMPSESSIONSTATE_OFFSET))(this, a1);
		}

		::System::Void EndSession(::Epic::OnlineServices::Sessions::EndSessionOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnEndSessionCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::EndSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnEndSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ENDSESSION_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetInviteCount(::Epic::OnlineServices::Sessions::GetInviteCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Sessions::GetInviteCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITECOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetInviteIdByIndex(::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::GetInviteIdByIndexOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_GETINVITEIDBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result IsUserInSession(::Epic::OnlineServices::Sessions::IsUserInSessionOptions* a1)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::IsUserInSessionOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ISUSERINSESSION_OFFSET))(this, a1);
		}

		::System::Void JoinSession(::Epic::OnlineServices::Sessions::JoinSessionOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::JoinSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnJoinSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_JOINSESSION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryInvites(::Epic::OnlineServices::Sessions::QueryInvitesOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::QueryInvitesOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnQueryInvitesCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_QUERYINVITES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RegisterPlayers(::Epic::OnlineServices::Sessions::RegisterPlayersOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RegisterPlayersOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnRegisterPlayersCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REGISTERPLAYERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RejectInvite(::Epic::OnlineServices::Sessions::RejectInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::RejectInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnRejectInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REJECTINVITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyJoinSessionAccepted(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYJOINSESSIONACCEPTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifySessionInviteAccepted(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITEACCEPTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifySessionInviteReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_REMOVENOTIFYSESSIONINVITERECEIVED_OFFSET))(this, a1);
		}

		::System::Void SendInvite(::Epic::OnlineServices::Sessions::SendInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnSendInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::SendInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnSendInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_SENDINVITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void StartSession(::Epic::OnlineServices::Sessions::StartSessionOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnStartSessionCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::StartSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnStartSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_STARTSESSION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UnregisterPlayers(::Epic::OnlineServices::Sessions::UnregisterPlayersOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UnregisterPlayersOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnUnregisterPlayersCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UNREGISTERPLAYERS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateSession(::Epic::OnlineServices::Sessions::UpdateSessionOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionOptions*, ::System::Object*, ::Epic::OnlineServices::Sessions::OnUpdateSessionCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSION_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result UpdateSessionModification(::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions* a1, ::Epic::OnlineServices::Sessions::SessionModification*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Sessions::UpdateSessionModificationOptions*, ::Epic::OnlineServices::Sessions::SessionModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_UPDATESESSIONMODIFICATION_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnDestroySessionCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONDESTROYSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnEndSessionCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONENDSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnJoinSessionAcceptedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnJoinSessionCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONJOINSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryInvitesCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRegisterPlayersCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRejectInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSendInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSessionInviteAcceptedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSessionInviteReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSESSIONINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnStartSessionCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONSTARTSESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUnregisterPlayersCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUNREGISTERPLAYERSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUpdateSessionCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_SESSIONS_SESSIONSINTERFACE_ONUPDATESESSIONCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
