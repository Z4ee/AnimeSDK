#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC44D80)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1CC44DA0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x1CC44DC0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_TARGETUSERIPADDRESSES_OFFSET UNITYSDK_OFFSET(0x1CC44DE0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x1CC44D90)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x1CC44DB0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x1CC44DD0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_TARGETUSERIPADDRESSES_OFFSET UNITYSDK_OFFSET(0x1CC44DF0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC44E00)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int QueryJoinRoomTokenOptions_TypeDefinitionIndex = 35950;

	class QueryJoinRoomTokenOptions : public ::System::Object
	{
	public:
		::System::String* _TargetUserIpAddresses_k__BackingField; // 0x10
		::System::String* _RoomName_k__BackingField; // 0x18
		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* _TargetUserIds_k__BackingField; // 0x20
		::Epic::OnlineServices::ProductUserId* _LocalUserId_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS__CTOR_OFFSET))(this);
		}

		::Epic::OnlineServices::ProductUserId* get_LocalUserId()
		{
			return ((::Epic::OnlineServices::ProductUserId*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_LOCALUSERID_OFFSET))(this);
		}

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::String* get_RoomName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_ROOMNAME_OFFSET))(this);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_ROOMNAME_OFFSET))(this, value);
		}

		::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* get_TargetUserIds()
		{
			return ((::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_TARGETUSERIDS_OFFSET))(this);
		}

		::System::Void set_TargetUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_TARGETUSERIDS_OFFSET))(this, value);
		}

		::System::String* get_TargetUserIpAddresses()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_GET_TARGETUSERIPADDRESSES_OFFSET))(this);
		}

		::System::Void set_TargetUserIpAddresses(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONS_SET_TARGETUSERIPADDRESSES_OFFSET))(this, value);
		}
	};
}
