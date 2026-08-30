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

#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYJOINLOBBYACCEPTED_OFFSET UNITYSDK_OFFSET(0x1DFFA6F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x1DFFA9A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFAC50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFAF00)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFB1B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFB460)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYRTCROOMCONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1DFFB710)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYINVITEID_OFFSET UNITYSDK_OFFSET(0x1DFFBA90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYUIEVENTID_OFFSET UNITYSDK_OFFSET(0x1DFFBCA0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLE_OFFSET UNITYSDK_OFFSET(0x1DFFB900)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBYSEARCH_OFFSET UNITYSDK_OFFSET(0x1DFFC010)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBY_OFFSET UNITYSDK_OFFSET(0x1DFFBE30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_DESTROYLOBBY_OFFSET UNITYSDK_OFFSET(0x1DFFC1A0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITECOUNT_OFFSET UNITYSDK_OFFSET(0x1DFFC380)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITEIDBYINDEX_OFFSET UNITYSDK_OFFSET(0x1DFFC570)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETRTCROOMNAME_OFFSET UNITYSDK_OFFSET(0x1DFFC8B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ISRTCROOMCONNECTED_OFFSET UNITYSDK_OFFSET(0x1DFFCBB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_JOINLOBBY_OFFSET UNITYSDK_OFFSET(0x1DFFCD80)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_KICKMEMBER_OFFSET UNITYSDK_OFFSET(0x1DFFCF60)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_LEAVELOBBY_OFFSET UNITYSDK_OFFSET(0x1DFFD140)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONCREATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9C30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONDESTROYLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9CD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9D70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9E10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONKICKMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9EB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLEAVELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9F50)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFF9FF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA090)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA130)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA1D0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA270)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONPROMOTEMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA310)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA3B0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA4F0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONRTCROOMCONNECTIONCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA450)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA590)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONUPDATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x1DFFA630)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_PROMOTEMEMBER_OFFSET UNITYSDK_OFFSET(0x1DFFD320)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_QUERYINVITES_OFFSET UNITYSDK_OFFSET(0x1DFFD500)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REJECTINVITE_OFFSET UNITYSDK_OFFSET(0x1DFFD770)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYJOINLOBBYACCEPTED_OFFSET UNITYSDK_OFFSET(0x1DFFD950)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITEACCEPTED_OFFSET UNITYSDK_OFFSET(0x1DFFDA30)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITERECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFDB10)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFDBF0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFDCD0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYUPDATERECEIVED_OFFSET UNITYSDK_OFFSET(0x1DFFDDB0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYRTCROOMCONNECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1DFFDE90)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_SENDINVITE_OFFSET UNITYSDK_OFFSET(0x1DFFDF70)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBYMODIFICATION_OFFSET UNITYSDK_OFFSET(0x1DFFE3C0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBY_OFFSET UNITYSDK_OFFSET(0x1DFFE150)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFFA6E0)
#define EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DFFA6D0)

namespace Epic::OnlineServices::Lobby
{
	inline static constexpr unsigned int LobbyInterface_TypeDefinitionIndex = 45739;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::UInt64 AddNotifyJoinLobbyAccepted(::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyJoinLobbyAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnJoinLobbyAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYJOINLOBBYACCEPTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyLobbyInviteAccepted(::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteAcceptedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyInviteAcceptedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITEACCEPTED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyLobbyInviteReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyInviteReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyInviteReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYINVITERECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyLobbyMemberStatusReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberStatusReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberStatusReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyMemberStatusReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyLobbyMemberUpdateReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyMemberUpdateReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyMemberUpdateReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyLobbyUpdateReceived(::Epic::OnlineServices::Lobby::AddNotifyLobbyUpdateReceivedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyLobbyUpdateReceivedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLobbyUpdateReceivedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYLOBBYUPDATERECEIVED_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyRTCRoomConnectionChanged(::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Lobby::AddNotifyRTCRoomConnectionChangedOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnRTCRoomConnectionChangedCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ADDNOTIFYRTCROOMCONNECTIONCHANGED_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CopyLobbyDetailsHandle(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleOptions* a1, ::Epic::OnlineServices::Lobby::LobbyDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLE_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyLobbyDetailsHandleByInviteId(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions* a1, ::Epic::OnlineServices::Lobby::LobbyDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByInviteIdOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYINVITEID_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result CopyLobbyDetailsHandleByUiEventId(::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions* a1, ::Epic::OnlineServices::Lobby::LobbyDetails*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CopyLobbyDetailsHandleByUiEventIdOptions*, ::Epic::OnlineServices::Lobby::LobbyDetails*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_COPYLOBBYDETAILSHANDLEBYUIEVENTID_OFFSET))(this, a1, a2);
		}

		::System::Void CreateLobby(::Epic::OnlineServices::Lobby::CreateLobbyOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnCreateLobbyCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnCreateLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBY_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result CreateLobbySearch(::Epic::OnlineServices::Lobby::CreateLobbySearchOptions* a1, ::Epic::OnlineServices::Lobby::LobbySearch*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::CreateLobbySearchOptions*, ::Epic::OnlineServices::Lobby::LobbySearch*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_CREATELOBBYSEARCH_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyLobby(::Epic::OnlineServices::Lobby::DestroyLobbyOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::DestroyLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnDestroyLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_DESTROYLOBBY_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 GetInviteCount(::Epic::OnlineServices::Lobby::GetInviteCountOptions* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetInviteCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITECOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Result GetInviteIdByIndex(::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetInviteIdByIndexOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETINVITEIDBYINDEX_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result GetRTCRoomName(::Epic::OnlineServices::Lobby::GetRTCRoomNameOptions* a1, ::System::String*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::GetRTCRoomNameOptions*, ::System::String*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_GETRTCROOMNAME_OFFSET))(this, a1, a2);
		}

		::Epic::OnlineServices::Result IsRTCRoomConnected(::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions* a1, ::System::Boolean& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::IsRTCRoomConnectedOptions*, ::System::Boolean&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ISRTCROOMCONNECTED_OFFSET))(this, a1, a2);
		}

		::System::Void JoinLobby(::Epic::OnlineServices::Lobby::JoinLobbyOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnJoinLobbyCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::JoinLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnJoinLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_JOINLOBBY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KickMember(::Epic::OnlineServices::Lobby::KickMemberOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnKickMemberCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::KickMemberOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnKickMemberCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_KICKMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LeaveLobby(::Epic::OnlineServices::Lobby::LeaveLobbyOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::LeaveLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnLeaveLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_LEAVELOBBY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PromoteMember(::Epic::OnlineServices::Lobby::PromoteMemberOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnPromoteMemberCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::PromoteMemberOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnPromoteMemberCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_PROMOTEMEMBER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void QueryInvites(::Epic::OnlineServices::Lobby::QueryInvitesOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnQueryInvitesCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::QueryInvitesOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnQueryInvitesCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_QUERYINVITES_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RejectInvite(::Epic::OnlineServices::Lobby::RejectInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnRejectInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::RejectInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnRejectInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REJECTINVITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyJoinLobbyAccepted(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYJOINLOBBYACCEPTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyLobbyInviteAccepted(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITEACCEPTED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyLobbyInviteReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYINVITERECEIVED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyLobbyMemberStatusReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERSTATUSRECEIVED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyLobbyMemberUpdateReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYMEMBERUPDATERECEIVED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyLobbyUpdateReceived(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYLOBBYUPDATERECEIVED_OFFSET))(this, a1);
		}

		::System::Void RemoveNotifyRTCRoomConnectionChanged(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_REMOVENOTIFYRTCROOMCONNECTIONCHANGED_OFFSET))(this, a1);
		}

		::System::Void SendInvite(::Epic::OnlineServices::Lobby::SendInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnSendInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::SendInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnSendInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_SENDINVITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void UpdateLobby(::Epic::OnlineServices::Lobby::UpdateLobbyOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyOptions*, ::System::Object*, ::Epic::OnlineServices::Lobby::OnUpdateLobbyCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBY_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::Result UpdateLobbyModification(::Epic::OnlineServices::Lobby::UpdateLobbyModificationOptions* a1, ::Epic::OnlineServices::Lobby::LobbyModification*& a2)
		{
			return ((::Epic::OnlineServices::Result(*)(::PVOID, ::Epic::OnlineServices::Lobby::UpdateLobbyModificationOptions*, ::Epic::OnlineServices::Lobby::LobbyModification*&))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_UPDATELOBBYMODIFICATION_OFFSET))(this, a1, a2);
		}

		static ::System::Void OnCreateLobbyCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONCREATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnDestroyLobbyCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONDESTROYLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnJoinLobbyAcceptedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnJoinLobbyCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONJOINLOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnKickMemberCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONKICKMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLeaveLobbyCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLEAVELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLobbyInviteAcceptedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITEACCEPTEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLobbyInviteReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYINVITERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLobbyMemberStatusReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERSTATUSRECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLobbyMemberUpdateReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYMEMBERUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnLobbyUpdateReceivedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONLOBBYUPDATERECEIVEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnPromoteMemberCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONPROMOTEMEMBERCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryInvitesCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONQUERYINVITESCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRTCRoomConnectionChangedCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONRTCROOMCONNECTIONCHANGEDCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRejectInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSendInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnUpdateLobbyCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_LOBBY_LOBBYINTERFACE_ONUPDATELOBBYCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
