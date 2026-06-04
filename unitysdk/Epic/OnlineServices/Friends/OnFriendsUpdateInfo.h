#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/FriendsStatus.h"
#include "unitysdk/Epic/OnlineServices/Friends/OnFriendsUpdateInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0xA2C9240)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2C91A0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xA2C9220)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C91C0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xA2C9200)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2C91E0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0xA2C9760)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0xA2C91B0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0xA2C9230)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0xA2C91D0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_OFFSET UNITYSDK_OFFSET(0xA2C9250)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0xA2C9210)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0xA2C91F0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0xA2C9890)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnFriendsUpdateInfo_TypeDefinitionIndex = 42917;

	class OnFriendsUpdateInfo : public ::System::Object
	{
	public:
		::System::Object* _ClientData_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x18
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x20
		::Epic::OnlineServices::Friends::FriendsStatus _CurrentStatus_k__BackingField; // 0x28
		::Epic::OnlineServices::Friends::FriendsStatus _PreviousStatus_k__BackingField; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO__CTOR_OFFSET))(this);
		}

		::System::Object* get_ClientData()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CLIENTDATA_OFFSET))(this);
		}

		::System::Void set_ClientData(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CLIENTDATA_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_TARGETUSERID_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Friends::FriendsStatus get_PreviousStatus()
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::Epic::OnlineServices::Friends::FriendsStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::FriendsStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_PREVIOUSSTATUS_OFFSET))(this, a1);
		}

		::Epic::OnlineServices::Friends::FriendsStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Epic::OnlineServices::Friends::FriendsStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::FriendsStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CURRENTSTATUS_OFFSET))(this, a1);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_1_OFFSET))(this, a1);
		}
	};
}
