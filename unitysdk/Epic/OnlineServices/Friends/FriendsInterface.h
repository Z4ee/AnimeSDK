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

#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ACCEPTINVITE_OFFSET UNITYSDK_OFFSET(0xA2C6C80)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ADDNOTIFYFRIENDSUPDATE_OFFSET UNITYSDK_OFFSET(0xA2C6E60)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDATINDEX_OFFSET UNITYSDK_OFFSET(0xA2C7270)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDSCOUNT_OFFSET UNITYSDK_OFFSET(0xA2C7480)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETSTATUS_OFFSET UNITYSDK_OFFSET(0xA2C7670)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONACCEPTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2C6940)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONFRIENDSUPDATECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2C69E0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONQUERYFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2C6A80)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2C6B20)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET UNITYSDK_OFFSET(0xA2C6BC0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_QUERYFRIENDS_OFFSET UNITYSDK_OFFSET(0xA2C77D0)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REJECTINVITE_OFFSET UNITYSDK_OFFSET(0xA2C7A30)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REMOVENOTIFYFRIENDSUPDATE_OFFSET UNITYSDK_OFFSET(0xA2C7C10)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_SENDINVITE_OFFSET UNITYSDK_OFFSET(0xA2C7E60)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA2C6C70)
#define EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C6C60)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int FriendsInterface_TypeDefinitionIndex = 42905;

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

		::System::Void _ctor_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void AcceptInvite(::Epic::OnlineServices::Friends::AcceptInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::AcceptInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnAcceptInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ACCEPTINVITE_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt64 AddNotifyFriendsUpdate(::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback* a3)
		{
			return ((::System::UInt64(*)(::PVOID, ::Epic::OnlineServices::Friends::AddNotifyFriendsUpdateOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnFriendsUpdateCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ADDNOTIFYFRIENDSUPDATE_OFFSET))(this, a1, a2, a3);
		}

		::Epic::OnlineServices::EpicAccountId* GetFriendAtIndex(::Epic::OnlineServices::Friends::GetFriendAtIndexOptions* a1)
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID, ::Epic::OnlineServices::Friends::GetFriendAtIndexOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDATINDEX_OFFSET))(this, a1);
		}

		::System::Int32 GetFriendsCount(::Epic::OnlineServices::Friends::GetFriendsCountOptions* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Epic::OnlineServices::Friends::GetFriendsCountOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETFRIENDSCOUNT_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Friends::FriendsStatus GetStatus(::Epic::OnlineServices::Friends::GetStatusOptions* a1)
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID, ::Epic::OnlineServices::Friends::GetStatusOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_GETSTATUS_OFFSET))(this, a1);
		}

		::System::Void QueryFriends(::Epic::OnlineServices::Friends::QueryFriendsOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::QueryFriendsOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnQueryFriendsCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_QUERYFRIENDS_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RejectInvite(::Epic::OnlineServices::Friends::RejectInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Friends::OnRejectInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::RejectInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnRejectInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REJECTINVITE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveNotifyFriendsUpdate(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_REMOVENOTIFYFRIENDSUPDATE_OFFSET))(this, a1);
		}

		::System::Void SendInvite(::Epic::OnlineServices::Friends::SendInviteOptions* a1, ::System::Object* a2, ::Epic::OnlineServices::Friends::OnSendInviteCallback* a3)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::SendInviteOptions*, ::System::Object*, ::Epic::OnlineServices::Friends::OnSendInviteCallback*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_SENDINVITE_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void OnAcceptInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONACCEPTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnFriendsUpdateCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONFRIENDSUPDATECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnQueryFriendsCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONQUERYFRIENDSCALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnRejectInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONREJECTINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}

		static ::System::Void OnSendInviteCallbackInternalImplementation(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_FRIENDSINTERFACE_ONSENDINVITECALLBACKINTERNALIMPLEMENTATION_OFFSET))(a1);
		}
	};
}
