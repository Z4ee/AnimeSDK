#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class LeaveRoomOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x66FA0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x66F30)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x66DB0)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x66F20)
#define EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x66E70)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int LeaveRoomOptionsInternal_TypeDefinitionIndex = 35710;

	struct alignas(8) LeaveRoomOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::LeaveRoomOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::LeaveRoomOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_LEAVEROOMOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
