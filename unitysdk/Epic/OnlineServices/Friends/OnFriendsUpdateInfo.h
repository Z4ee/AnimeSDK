#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/Friends/FriendsStatus.h"
#include "unitysdk/Epic/OnlineServices/Friends/OnFriendsUpdateInfoInternal.h"
#include "unitysdk/Epic/OnlineServices/Result.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class EpicAccountId; }

#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GETRESULTCODE_OFFSET UNITYSDK_OFFSET(0x1DF50770)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF506D0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1DF50750)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF506F0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x1DF50730)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF50710)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_1_OFFSET UNITYSDK_OFFSET(0x1DF50AA0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CLIENTDATA_OFFSET UNITYSDK_OFFSET(0x1DF506E0)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x1DF50760)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1DF50700)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_OFFSET UNITYSDK_OFFSET(0x1DF50780)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_PREVIOUSSTATUS_OFFSET UNITYSDK_OFFSET(0x1DF50740)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_TARGETUSERID_OFFSET UNITYSDK_OFFSET(0x1DF50720)
#define EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF50BE0)

namespace Epic::OnlineServices::Friends
{
	inline static constexpr unsigned int OnFriendsUpdateInfo_TypeDefinitionIndex = 36555;

	class OnFriendsUpdateInfo : public ::System::Object
	{
	public:
		::Epic::OnlineServices::EpicAccountId* _LocalUserId_k__BackingField; // 0x10
		::Epic::OnlineServices::EpicAccountId* _TargetUserId_k__BackingField; // 0x18
		::System::Object* _ClientData_k__BackingField; // 0x20
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

		::System::Void set_ClientData(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CLIENTDATA_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::EpicAccountId* get_TargetUserId()
		{
			return ((::Epic::OnlineServices::EpicAccountId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_TARGETUSERID_OFFSET))(this);
		}

		::System::Void set_TargetUserId(::Epic::OnlineServices::EpicAccountId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::EpicAccountId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_TARGETUSERID_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Friends::FriendsStatus get_PreviousStatus()
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_PREVIOUSSTATUS_OFFSET))(this);
		}

		::System::Void set_PreviousStatus(::Epic::OnlineServices::Friends::FriendsStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::FriendsStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_PREVIOUSSTATUS_OFFSET))(this, value);
		}

		::Epic::OnlineServices::Friends::FriendsStatus get_CurrentStatus()
		{
			return ((::Epic::OnlineServices::Friends::FriendsStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GET_CURRENTSTATUS_OFFSET))(this);
		}

		::System::Void set_CurrentStatus(::Epic::OnlineServices::Friends::FriendsStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::Friends::FriendsStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_CURRENTSTATUS_OFFSET))(this, value);
		}

		::System::Nullable_1<::Epic::OnlineServices::Result> GetResultCode()
		{
			return ((::System::Nullable_1<::Epic::OnlineServices::Result>(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_GETRESULTCODE_OFFSET))(this);
		}

		::System::Void Set(::System::Nullable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal> other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::Epic::OnlineServices::Friends::OnFriendsUpdateInfoInternal>))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_FRIENDS_ONFRIENDSUPDATEINFO_SET_1_OFFSET))(this, other);
		}
	};
}
