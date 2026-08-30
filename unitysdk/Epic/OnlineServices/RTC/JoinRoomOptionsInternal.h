#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/JoinRoomFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class JoinRoomOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3C151B0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x3C15130)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_CLIENTBASEURL_OFFSET UNITYSDK_OFFSET(0x3C14D90)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x3C14FB0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x3C14C20)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x3C14FC0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOOUTPUTENABLED_OFFSET UNITYSDK_OFFSET(0x3C15070)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x3C15120)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x3C14EF0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTTOKEN_OFFSET UNITYSDK_OFFSET(0x3C14E40)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x3C14CE0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int JoinRoomOptionsInternal_TypeDefinitionIndex = 45378;

	struct alignas(8) JoinRoomOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_ClientBaseUrl; // 0x28
		::System::IntPtr m_ParticipantToken; // 0x30
		::System::IntPtr m_ParticipantId; // 0x38
		::Epic::OnlineServices::RTC::JoinRoomFlags m_Flags; // 0x40
		::System::Int32 m_ManualAudioInputEnabled; // 0x44
		::System::Int32 m_ManualAudioOutputEnabled; // 0x48

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, a1);
		}

		::System::Void set_RoomName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, a1);
		}

		::System::Void set_ClientBaseUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_CLIENTBASEURL_OFFSET))(this, a1);
		}

		::System::Void set_ParticipantToken(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTTOKEN_OFFSET))(this, a1);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET))(this, a1);
		}

		::System::Void set_Flags(::Epic::OnlineServices::RTC::JoinRoomFlags a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_FLAGS_OFFSET))(this, a1);
		}

		::System::Void set_ManualAudioInputEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOINPUTENABLED_OFFSET))(this, a1);
		}

		::System::Void set_ManualAudioOutputEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOOUTPUTENABLED_OFFSET))(this, a1);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::JoinRoomOptions* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_OFFSET))(this, a1);
		}

		::System::Void Set_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_1_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
