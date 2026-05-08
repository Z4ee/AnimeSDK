#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/RTCAudio/RTCAudioStatus.h"
#include "unitysdk/System/ValueType.h"

namespace Epic::OnlineServices { class ProductUserId; }
namespace Epic::OnlineServices::RTCAudio { class UpdateSendingOptions; }
namespace System { class Object; }
namespace System { class String; }

#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF9D0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_1_OFFSET UNITYSDK_OFFSET(0x8BF960)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_AUDIOSTATUS_OFFSET UNITYSDK_OFFSET(0x319040)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET UNITYSDK_OFFSET(0x8BF7E0)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_OFFSET UNITYSDK_OFFSET(0x8BF950)
#define EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_ROOMNAME_OFFSET UNITYSDK_OFFSET(0x8BF8A0)

namespace Epic::OnlineServices::RTCAudio
{
	inline static constexpr unsigned int UpdateSendingOptionsInternal_TypeDefinitionIndex = 33711;

	struct alignas(8) UpdateSendingOptionsInternal
	{
		::System::Int32 m_ApiVersion; // 0x10
		::System::IntPtr m_LocalUserId; // 0x18
		::System::IntPtr m_RoomName; // 0x20
		::Epic::OnlineServices::RTCAudio::RTCAudioStatus m_AudioStatus; // 0x28

		::System::Void set_LocalUserId(::Epic::OnlineServices::ProductUserId* value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::ProductUserId*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_LOCALUSERID_OFFSET))(this, value);
		}

		::System::Void set_RoomName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_ROOMNAME_OFFSET))(this, value);
		}

		::System::Void set_AudioStatus(::Epic::OnlineServices::RTCAudio::RTCAudioStatus value)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::RTCAudioStatus))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_AUDIOSTATUS_OFFSET))(this, value);
		}

		::System::Void Set(::Epic::OnlineServices::RTCAudio::UpdateSendingOptions* other)
		{
			return ((::System::Void(*)(::PVOID, ::Epic::OnlineServices::RTCAudio::UpdateSendingOptions*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_OFFSET))(this, other);
		}

		::System::Void Set_1(::System::Object* other)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_SET_1_OFFSET))(this, other);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_RTCAUDIO_UPDATESENDINGOPTIONSINTERNAL_DISPOSE_OFFSET))(this);
		}
	};
}
