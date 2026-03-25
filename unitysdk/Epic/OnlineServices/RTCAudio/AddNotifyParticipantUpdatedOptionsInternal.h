#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class AddNotifyParticipantUpdatedOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x6B140)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x6B0D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x6AF50)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x6B0C0)
#define EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x6B010)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int AddNotifyParticipantUpdatedOptionsInternal_TypeDefinitionIndex = 35602;

	struct alignas(8) AddNotifyParticipantUpdatedOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::AddNotifyParticipantUpdatedOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_ADDNOTIFYPARTICIPANTUPDATEDOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
