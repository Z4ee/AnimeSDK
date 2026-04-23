#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/FriendsStatus.h"
#include "unitysdk/Epic/OnlineServices/Handle.h"

namespace Epic::OnlineServices { class EpicAccountId; }
namespace Epic::OnlineServices::Friends { class AcceptInviteOptions; }
namespace Epic::OnlineServices::Friends { class AddNotifyFriendsUpdateOptions; }
namespace Epic::OnlineServices::Friends { class GetFriendAtIndexOptions; }
namespace Epic::OnlineServices::Friends { class GetFriendsCountOptions; }
namespace Epic::OnlineServices::Friends { class GetStatusOptions; }
namespace Epic::OnlineServices::Friends { class OnAcceptInviteCallback; }
namespace Epic::OnlineServices::Friends { class OnFriendsUpdateCallback; }
namespace Epic::OnlineServices::Friends { class OnQueryFriendsCallback; }
namespace Epic::OnlineServices::Friends { class OnRejectInviteCallback; }
namespace Epic::OnlineServices::Friends { class OnSendInviteCallback; }
namespace Epic::OnlineServices::Friends { class QueryFriendsOptions; }
namespace Epic::OnlineServices::Friends { class RejectInviteOptions; }
namespace Epic::OnlineServices::Friends { class SendInviteOptions; }
namespace System { class Object; }

#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ACCEPTINVITE_OFFSET UNITYSDK_OFFSET(0x8E85D20)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ADDNOTIFYFRIENDSUPDATE_OFFSET UNITYSDK_OFFSET(0x8E85F00)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDATINDEX_OFFSET UNITYSDK_OFFSET(0x8E86340)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDSCOUNT_OFFSET UNITYSDK_OFFSET(0x8E86550)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0x8E86740)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONACCEPTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E85A30)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONFRIENDSUPDATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E85AC0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONQUERYFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E85B50)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E85BE0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0x8E85C70)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_QUERYFRIENDS_OFFSET UNITYSDK_OFFSET(0x8E868A0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REJECTINVITE_OFFSET UNITYSDK_OFFSET(0x8E86B00)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REMOVENOTIFYFRIENDSUPDATE_OFFSET UNITYSDK_OFFSET(0x8E86CE0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_SENDINVITE_OFFSET UNITYSDK_OFFSET(0x8E86F20)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8E85D10)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0x8E85D00)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int FriendsInterface_TypeDefinitionIndex = 42102;

	class FriendsInterface : public ::Epic::OnlineServices::Handle
	{
	public:
		// static const ::System::Int32 AcceptinviteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 AddnotifyfriendsupdateApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetfriendatindexApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetfriendscountApiLatest = 0x1; // 0x0
		// static const ::System::Int32 GetstatusApiLatest = 0x1; // 0x0
		// static const ::System::Int32 QueryfriendsApiLatest = 0x1; // 0x0
		// static const ::System::Int32 RejectinviteApiLatest = 0x1; // 0x0
		// static const ::System::Int32 SendinviteApiLatest = 0x1; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::IntPtr innerHandle)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_1_OFFSET))(this, innerHandle);
		}

		::System::Void AcceptInvite(::Epic::OnlineServices::Friends::AcceptInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::AcceptInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ACCEPTINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::UInt64 AddNotifyFriendsUpdate(::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback* friendsUpdateHandler)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ADDNOTIFYFRIENDSUPDATE_OFFSET))(this, options, clientData, friendsUpdateHandler);
		}

		::Epic::OnlineServices::EpicAccountId* GetFriendAtIndex(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions* options)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID, ::Epic::OnlineServices::Friends::GetFriendAtIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDATINDEX_OFFSET))(this, options);
		}

		::System::Int32 GetFriendsCount(::Epic::OnlineServices::Friends::GetFriendsCountOptions* options)
		{
			return ((::System::Int32(*)(::PVOID, ::Epic::OnlineServices::Friends::GetFriendsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDSCOUNT_OFFSET))(this, options);
		}

		::Epic::OnlineServices::Friends::FriendsStatus GetStatus(::Epic::OnlineServices::Friends::GetStatusOptions* options)
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID, ::Epic::OnlineServices::Friends::GetStatusOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETSTATUS_OFFSET))(this, options);
		}

		::System::Void QueryFriends(::Epic::OnlineServices::Friends::QueryFriendsOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_QUERYFRIENDS_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RejectInvite(::Epic::OnlineServices::Friends::RejectInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Friends::OnRejectInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::RejectInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnRejectInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REJECTINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		::System::Void RemoveNotifyFriendsUpdate(::System::UInt64 notificationId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REMOVENOTIFYFRIENDSUPDATE_OFFSET))(this, notificationId);
		}

		::System::Void SendInvite(::Epic::OnlineServices::Friends::SendInviteOptions* options, ::System::Object* clientData, ::Epic::OnlineServices::Friends::OnSendInviteCallback* completionDelegate)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::SendInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnSendInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_SENDINVITE_OFFSET))(this, options, clientData, completionDelegate);
		}

		static ::System::Void OnAcceptInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONACCEPTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnFriendsUpdateCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONFRIENDSUPDATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnQueryFriendsCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONQUERYFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnRejectInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}

		static ::System::Void OnSendInviteCallbackInternalImplementation(::System::IntPtr data)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(data);
		}
	};
}
