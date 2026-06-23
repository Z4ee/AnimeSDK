#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class UpdateReceivingOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9DA900)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x9DA890)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_AUDIOENABLED_OFFSET UNITYSDK_OFFSET(0x9DA7D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x9DA5A0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x9DA880)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET UNITYSDK_OFFSET(0x9DA710)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x9DA660)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateReceivingOptionsInternal_TypeDefinitionIndex = 35270;

	struct alignas(8) UpdateReceivingOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::System::IntPtr m_ParticipantId; // 0x28
		::System::Int32 m_AudioEnabled; // 0x30

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_ParticipantId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_PARTICIPANTID_OFFSET))(this, value);
		}

		::System::Void set_AudioEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_AUDIOENABLED_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateReceivingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATERECEIVINGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
