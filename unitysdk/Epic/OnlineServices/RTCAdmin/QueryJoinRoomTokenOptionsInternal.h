#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAdmin { class QueryJoinRoomTokenOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x69340)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x692D0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x69030)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x692C0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x690F0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_TARGETUSERIDS_OFFSET UNITYSDK_OFFSET(0x691A0)
#define EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_TARGETUSERIPADDRESSES_OFFSET UNITYSDK_OFFSET(0x69210)

namespace Epic::OnlineServices::RTCAdmin
{
	inline static constexpr unsigned int QueryJoinRoomTokenOptionsInternal_TypeDefinitionIndex = 35684;

	struct alignas(8) QueryJoinRoomTokenOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_TargetUserIds; // 0x28
		::System::UInt32 m_TargetUserIdsCount; // 0x30
		::System::IntPtr m_TargetUserIpAddresses; // 0x38

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_TargetUserIds(::Il2CppArray<::Epic::OnlineServices::ProductUserId*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Epic::OnlineServices::ProductUserId*>*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_TARGETUSERIDS_OFFSET))(this, value);
		}

		::System::Void set_TargetUserIpAddresses(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_TARGETUSERIPADDRESSES_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAdmin::QueryJoinRoomTokenOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCADMIN_QUERYJOINROOMTOKENOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
