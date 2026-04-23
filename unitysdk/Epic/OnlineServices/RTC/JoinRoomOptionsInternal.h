#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTC/JoinRoomFlags.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTC { class JoinRoomOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x675A0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x67530)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_CLIENTBASEURL_OFFSET UNITYSDK_OFFSET(0x67190)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x673B0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x67020)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOINPUTENABLED_OFFSET UNITYSDK_OFFSET(0x673C0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOOUTPUTENABLED_OFFSET UNITYSDK_OFFSET(0x67470)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x67520)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x672F0)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTTOKEN_OFFSET UNITYSDK_OFFSET(0x67240)
#define EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x670E0)

namespace Epic::OnlineServices::RTC
{
	inline static constexpr unsigned int JoinRoomOptionsInternal_TypeDefinitionIndex = 41532;

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

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_ClientBaseUrl(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_CLIENTBASEURL_OFFSET))(this, value);
		}

		::System::Void set_ParticipantToken(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTTOKEN_OFFSET))(this, value);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Void set_Flags(::Epic::OnlineServices::RTC::JoinRoomFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomFlags))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Void set_ManualAudioInputEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOINPUTENABLED_OFFSET))(this, value);
		}

		::System::Void set_ManualAudioOutputEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_MANUALAUDIOOUTPUTENABLED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTC::JoinRoomOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTC::JoinRoomOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTC_JOINROOMOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
