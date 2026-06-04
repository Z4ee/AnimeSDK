#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class AddNotifyParticipantStatusChangedOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6B890)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6B810)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6B690)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6B800)
#define EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6B750)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int AddNotifyParticipantStatusChangedOptionsInternal_TypeDefinitionIndex = 42324;

	struct alignas(8) AddNotifyParticipantStatusChangedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::AddNotifyParticipantStatusChangedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_ADDNOTIFYPARTICIPANTSTATUSCHANGEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
