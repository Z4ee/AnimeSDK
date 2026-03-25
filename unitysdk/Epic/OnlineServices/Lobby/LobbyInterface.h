#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"
#include "unitysdk/Epic/OnlineServices/Result.h"

namespace Epic::OnlineServices::Lobby { class AddNotifyJoinLobbyAcceptedOptions; }
namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyInviteAcceptedOptions; }
namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyInviteReceivedOptions; }
namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyMemberStatusReceivedOptions; }
namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyMemberUpdateReceivedOptions; }
namespace Epic::OnlineServices::Lobby { class AddNotifyLobbyUpdateReceivedOptions; }
namespace Epic::OnlineServices::Lobby { class AddNotifyRTCRoomConnectionChangedOptions; }
namespace Epic::OnlineServices::Lobby { class CopyLobbyDetailsHandleByInviteIdOptions; }
namespace Epic::OnlineServices::Lobby { class CopyLobbyDetailsHandleByUiEventIdOptions; }
namespace Epic::OnlineServices::Lobby { class CopyLobbyDetailsHandleOptions; }
namespace Epic::OnlineServices::Lobby { class CreateLobbyOptions; }
namespace Epic::OnlineServices::Lobby { class CreateLobbySearchOptions; }
namespace Epic::OnlineServices::Lobby { class DestroyLobbyOptions; }
namespace Epic::OnlineServices::Lobby { class GetInviteCountOptions; }
namespace Epic::OnlineServices::Lobby { class GetInviteIdByIndexOptions; }
namespace Epic::OnlineServices::Lobby { class GetRTCRoomNameOptions; }
namespace Epic::OnlineServices::Lobby { class IsRTCRoomConnectedOptions; }
namespace Epic::OnlineServices::Lobby { class JoinLobbyOptions; }
namespace Epic::OnlineServices::Lobby { class KickMemberOptions; }
namespace Epic::OnlineServices::Lobby { class LeaveLobbyOptions; }
namespace Epic::OnlineServices::Lobby { class LobbyDetails; }
namespace Epic::OnlineServices::Lobby { class LobbyModification; }
namespace Epic::OnlineServices::Lobby { class LobbySearch; }
namespace Epic::OnlineServices::Lobby { class OnCreateLobbyCallback; }
namespace Epic::OnlineServices::Lobby { class OnDestroyLobbyCallback; }
namespace Epic::OnlineServices::Lobby { class OnJoinLobbyAcceptedCallback; }
namespace Epic::OnlineServices::Lobby { class OnJoinLobbyCallback; }
namespace Epic::OnlineServices::Lobby { class OnKickMemberCallback; }
namespace Epic::OnlineServices::Lobby { class OnLeaveLobbyCallback; }
namespace Epic::OnlineServices::Lobby { class OnLobbyInviteAcceptedCallback; }
namespace Epic::OnlineServices::Lobby { class OnLobbyInviteReceivedCallback; }
namespace Epic::OnlineServices::Lobby { class OnLobbyMemberStatusReceivedCallback; }
namespace Epic::OnlineServices::Lobby { class OnLobbyMemberUpdateReceivedCallback; }
namespace Epic::OnlineServices::Lobby { class OnLobbyUpdateReceivedCallback; }
namespace Epic::OnlineServices::Lobby { class OnPromoteMemberCallback; }
namespace Epic::OnlineServices::Lobby { class OnQueryInvitesCallback; }
namespace Epic::OnlineServices::Lobby { class OnRTCRoomConnectionChangedCallback; }
namespace Epic::OnlineServices::Lobby { class OnRejectInviteCallback; }
namespace Epic::OnlineServices::Lobby { class OnSendInviteCallback; }
namespace Epic::OnlineServices::Lobby { class OnUpdateLobbyCallback; }
namespace Epic::OnlineServices::Lobby { class PromoteMemberOptions; }
namespace Epic::OnlineServices::Lobby { class QueryInvitesOptions; }
namespace Epic::OnlineServices::Lobby { class RejectInviteOptions; }
namespace Epic::OnlineServices::Lobby { class SendInviteOptions; }
namespace Epic::OnlineServices::Lobby { class UpdateLobbyModificationOptions; }
namespace Epic::OnlineServices::Lobby { class UpdateLobbyOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYJOINLOBBYACCEPTED_OFFSET UNITYSDK_OFFSET(0x867DBA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x867DE20)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x867E0A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET UNITYSDK_OFFSET(0x867E320)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x867E5A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x867E820)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYRTCROOMCONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x867EAA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYINVITEID_OFFSET UNITYSDK_OFFSET(0x867EE10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYUIEVENTID_OFFSET UNITYSDK_OFFSET(0x867F020)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLE_OFFSET UNITYSDK_OFFSET(0x867EC80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBYSEARCH_OFFSET UNITYSDK_OFFSET(0x867F370)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBY_OFFSET UNITYSDK_OFFSET(0x867F1B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_DESTROYLOBBY_OFFSET UNITYSDK_OFFSET(0x867F500)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITECOUNT_OFFSET UNITYSDK_OFFSET(0x867F6C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x867F8B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETRTCROOMNAME_OFFSET UNITYSDK_OFFSET(0x867FC00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ISRTCROOMCONNECTED_OFFSET UNITYSDK_OFFSET(0x867FF20)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_JOINLOBBY_OFFSET UNITYSDK_OFFSET(0x86800F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_KICKMEMBER_OFFSET UNITYSDK_OFFSET(0x86802B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_LEAVELOBBY_OFFSET UNITYSDK_OFFSET(0x8680470)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONCREATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D1F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONDESTROYLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D280)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D310)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D3A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONKICKMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D430)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLEAVELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D4C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D550)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D5E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D670)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D700)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D790)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONPROMOTEMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D820)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D8B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D9D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONRTCROOMCONNECTIONCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867D940)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867DA60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONUPDATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x867DAF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_PROMOTEMEMBER_OFFSET UNITYSDK_OFFSET(0x8680630)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_QUERYINVITES_OFFSET UNITYSDK_OFFSET(0x86807F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REJECTINVITE_OFFSET UNITYSDK_OFFSET(0x8680A40)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYJOINLOBBYACCEPTED_OFFSET UNITYSDK_OFFSET(0x8680C00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x8680CE0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x8680DC0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET UNITYSDK_OFFSET(0x8680EA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x8680F80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x8681060)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYRTCROOMCONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x8681140)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_SENDINVITE_OFFSET UNITYSDK_OFFSET(0x8681220)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBYMODIFICATION_OFFSET UNITYSDK_OFFSET(0x8681630)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBY_OFFSET UNITYSDK_OFFSET(0x86813E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x867DB90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x867DB80)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyInterface_TypeDefinitionIndex = 36067;

	class LobbyInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AddnotifyjoinlobbyacceptedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifylobbyinviteacceptedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifylobbyinvitereceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifylobbymemberstatusreceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifylobbymemberupdatereceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifylobbyupdatereceivedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyrtcroomconnectionchangedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AttributeApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AttributedataApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopylobbydetailshandleApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopylobbydetailshandlebyinviteidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CopylobbydetailshandlebyuieventidApiLatest = 0x1; // 0x0
		// static const ::System::Int32 CreatelobbyApiLatest = 0x7; // 0x0
		// static const ::System::Int32 CreatelobbysearchApiLatest = 0x1; // 0x0
		// static const ::System::Int32 DestroylobbyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetinvitecountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetinviteidbyindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetrtcroomnameApiLatest = 0x1; // 0x0
		// static const ::System::Int32 InviteidMaxLength = 0x40; // 0x0
		// static const ::System::Int32 IsrtcroomconnectedApiLatest = 0x1; // 0x0
		// static const ::System::Int32 JoinlobbyApiLatest = 0x3; // 0x0
		// static const ::System::Int32 KickmemberApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LeavelobbyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 LocalrtcoptionsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 MaxLobbies = 0x10; // 0x0
		// static const ::System::Int32 MaxLobbyMembers = 0x40; // 0x0
		// static const ::System::Int32 MaxLobbyidoverrideLength = 0x3C; // 0x0
		// static const ::System::Int32 MaxSearchResults = 0xC8; // 0x0
		// static const ::System::Int32 MinLobbyidoverrideLength = 0x4; // 0x0
		// static const ::System::Int32 PromotememberApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryinvitesApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RejectinviteApiLatest = 0x1; // 0x0
		// static const ::System::String* SearchBucketId; // 0x0
		// static const ::System::String* SearchMincurrentmembers; // 0x0
		// static const ::System::String* SearchMinslotsavailable; // 0x0
		// static const ::System::Int32 SendinviteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatelobbyApiLatest = 0x1; // 0x0
		// static const ::System::Int32 UpdatelobbymodificationApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::UInt64 AddNotifyJoinLobbyAccepted(::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYJOINLOBBYACCEPTED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyLobbyInviteAccepted(::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITEACCEPTED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyLobbyInviteReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITERECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyLobbyMemberStatusReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberStatusReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberStatusReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyLobbyMemberUpdateReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyLobbyUpdateReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyUpdateReceivedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyUpdateReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYUPDATERECEIVED_OFFSET))(this, options, clientData, notificationFn);
		}

		::System::UInt64 AddNotifyRTCRoomConnectionChanged(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallback* notificationFn)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYRTCROOMCONNECTIONCHANGED_OFFSET))(this, options, clientData, notificationFn);
		}

		::Epic::OnlineServices::Result CopyLobbyDetailsHandle(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleOptions* options, ::Epic::OnlineServices::Lobby::LobbyDetails*& outLobbyDetailsHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLE_OFFSET))(this, options, outLobbyDetailsHandle);
		}

		::Epic::OnlineServices::Result CopyLobbyDetailsHandleByInviteId(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions* options, ::Epic::OnlineServices::Lobby::LobbyDetails*& outLobbyDetailsHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYINVITEID_OFFSET))(this, options, outLobbyDetailsHandle);
		}

		::Epic::OnlineServices::Result CopyLobbyDetailsHandleByUiEventId(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions* options, ::Epic::OnlineServices::Lobby::LobbyDetails*& outLobbyDetailsHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYUIEVENTID_OFFSET))(this, options, outLobbyDetailsHandle);
		}

		::System::Void CreateLobby(::Epic::OnlineServices::Lobby::CreateLobbyOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnCreateLobbyCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnCreateLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBY_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result CreateLobbySearch(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions* options, ::Epic::OnlineServices::Lobby::LobbySearch*& outLobbySearchHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions*, ::Epic::OnlineServices::Lobby::LobbySearch*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBYSEARCH_OFFSET))(this, options, outLobbySearchHandle);
		}

		::System::Void DestroyLobby(::Epic::OnlineServices::Lobby::DestroyLobbyOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::DestroyLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_DESTROYLOBBY_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt32 GetInviteCount(::Epic::OnlineServices::Lobby::GetInviteCountOptions* options)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetInviteCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITECOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Result GetInviteIdByIndex(::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions* options, ::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITEIDBYINDEX_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result GetRTCRoomName(::Epic::OnlineServices::Lobby::GetRTCRoomNameOptions* options, ::System::String*& outBuffer)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetRTCRoomNameOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETRTCROOMNAME_OFFSET))(this, options, outBuffer);
		}

		::Epic::OnlineServices::Result IsRTCRoomConnected(::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions* options, ::System::Boolean& bOutIsConnected)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions*, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ISRTCROOMCONNECTED_OFFSET))(this, options, bOutIsConnected);
		}

		::System::Void JoinLobby(::Epic::OnlineServices::Lobby::JoinLobbyOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnJoinLobbyCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::JoinLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnJoinLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_JOINLOBBY_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void KickMember(::Epic::OnlineServices::Lobby::KickMemberOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnKickMemberCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnKickMemberCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_KICKMEMBER_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void LeaveLobby(::Epic::OnlineServices::Lobby::LeaveLobbyOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LeaveLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_LEAVELOBBY_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void PromoteMember(::Epic::OnlineServices::Lobby::PromoteMemberOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnPromoteMemberCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::PromoteMemberOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnPromoteMemberCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_PROMOTEMEMBER_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void QueryInvites(::Epic::OnlineServices::Lobby::QueryInvitesOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnQueryInvitesCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::QueryInvitesOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnQueryInvitesCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_QUERYINVITES_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RejectInvite(::Epic::OnlineServices::Lobby::RejectInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnRejectInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RejectInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnRejectInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REJECTINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyJoinLobbyAccepted(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYJOINLOBBYACCEPTED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyLobbyInviteAccepted(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITEACCEPTED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyLobbyInviteReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITERECEIVED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyLobbyMemberStatusReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyLobbyMemberUpdateReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyLobbyUpdateReceived(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYUPDATERECEIVED_OFFSET))(this, inId);
		}

		::System::Void RemoveNotifyRTCRoomConnectionChanged(::System::UInt64 inId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYRTCROOMCONNECTIONCHANGED_OFFSET))(this, inId);
		}

		::System::Void SendInvite(::Epic::OnlineServices::Lobby::SendInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnSendInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::SendInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnSendInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_SENDINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void UpdateLobby(::Epic::OnlineServices::Lobby::UpdateLobbyOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBY_OFFSET))(this, options, clientData, completionDelegate);
		}

		::Epic::OnlineServices::Result UpdateLobbyModification(::Epic::OnlineServices::Lobby::UpdateLobbyModificationOptions* options, ::Epic::OnlineServices::Lobby::LobbyModification*& outLobbyModificationHandle)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyModificationOptions*, ::Epic::OnlineServices::Lobby::LobbyModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBYMODIFICATION_OFFSET))(this, options, outLobbyModificationHandle);
		}

		static ::System::Void OnCreateLobbyCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONCREATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnDestroyLobbyCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONDESTROYLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnJoinLobbyAcceptedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnJoinLobbyCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnKickMemberCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONKICKMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLeaveLobbyCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLEAVELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLobbyInviteAcceptedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLobbyInviteReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLobbyMemberStatusReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLobbyMemberUpdateReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnLobbyUpdateReceivedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnPromoteMemberCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONPROMOTEMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryInvitesCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRTCRoomConnectionChangedCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONRTCROOMCONNECTIONCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRejectInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSendInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnUpdateLobbyCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONUPDATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
